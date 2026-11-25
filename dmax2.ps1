$src = @"
using System;
using System.Runtime.InteropServices;
public class DMax2 {
  [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
  [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int c);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, uint dx, uint dy, uint d, UIntPtr e);
}
"@
Add-Type -TypeDefinition $src
$p = Get-Process -Name HoyleCasino4 -ErrorAction Stop
$h = $p.MainWindowHandle
[DMax2]::ShowWindow($h,3) | Out-Null
Start-Sleep -Seconds 1
[DMax2]::SetForegroundWindow($h) | Out-Null
$pt = New-Object DMax2+POINT
[DMax2]::ClientToScreen($h,[ref]$pt) | Out-Null
"client origin $($pt.X),$($pt.Y)"
[DMax2]::SetCursorPos($pt.X + 660, $pt.Y + 559) | Out-Null
Start-Sleep -Milliseconds 300
[DMax2]::mouse_event(0x0002,0,0,0,[UIntPtr]::Zero)
Start-Sleep -Milliseconds 120
[DMax2]::mouse_event(0x0004,0,0,0,[UIntPtr]::Zero)
Start-Sleep -Seconds 4
$p.Refresh()
"exited=$($p.HasExited) win=$($p.MainWindowTitle)"
