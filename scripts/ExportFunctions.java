import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class ExportFunctions extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) { println("usage: ExportFunctions <out_dir>"); return; }
        File out = new File(args[0]);
        out.mkdirs();
        long lo = 0x401000L, hi = 0x633000L;
        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> fs = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            long ea = f.getEntryPoint().getOffset();
            if (ea >= lo && ea < hi) fs.add(f);
        }
        fs.sort(Comparator.comparingLong(f -> f.getEntryPoint().getOffset()));
        try (PrintWriter w = new PrintWriter(new File(out, "functions.tsv"), "UTF-8")) {
            w.println("address\tname\tsize\tlib");
            for (int i = 0; i < fs.size(); ++i) {
                Function f = fs.get(i);
                long ea = f.getEntryPoint().getOffset();
                long next = (i + 1 < fs.size()) ? fs.get(i + 1).getEntryPoint().getOffset() : hi;
                long size = next > ea ? next - ea : 1;
                String name = f.getName().replace('\t', ' ').replace('\n', ' ');
                w.printf("%08x\t%s\t%d\t0%n", ea, name, size);
            }
        }
        println("wrote " + fs.size() + " functions");
    }
}
