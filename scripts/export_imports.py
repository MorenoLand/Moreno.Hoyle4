import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "pipeline"))
import cfg
from pe_image import Image

out = Path(cfg.ida_dump())
out.mkdir(parents=True, exist_ok=True)
im = Image(cfg.game_exe())
rows = list(im.imports())
with open(out / "imports.txt", "w", encoding="utf-8", newline="\n") as f:
    for module, slot, name in rows:
        f.write("%s\t%08x\t%s\t\n" % (module[:-4] if module.lower().endswith(".dll") else module, slot, name))
print("wrote %d imports to %s" % (len(rows), out / "imports.txt"))
