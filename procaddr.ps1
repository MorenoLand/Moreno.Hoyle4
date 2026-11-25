$src = @"
using System;
using System.Runtime.InteropServices;
public class Cls {
  [DllImport("user32.dll")] public static extern uint GetClassLong(IntPtr h, int i);
  [DllImport("user32.dll")] public static extern uint GetWindowLong(IntPtr h, int i);
}
"@
Add-Type -TypeDefinition $src
$p = Get-Process -Name HoyleCasino4 -ErrorAction Stop
$h = $p.MainWindowHandle
"hwnd=$h classproc=$('{0:X8}' -f [Cls]::GetClassLong($h,-26)) winproc=$('{0:X8}' -f [Cls]::GetWindowLong($h,-4))"
$p.Modules | Where-Object { $_.ModuleName -eq 'HoyleCasino4.exe' } | Select-Object BaseAddress,ModuleMemorySize | Format-List | Out-String
