$src = @"
using System;
using System.Runtime.InteropServices;
public class LSeq {
  [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, uint dx, uint dy, uint d, UIntPtr e);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
}
"@
Add-Type -TypeDefinition $src
$p = Get-Process -Id 12476 -ErrorAction Stop
$h = $p.MainWindowHandle
$pt = New-Object LSeq+POINT
[LSeq]::ClientToScreen($h,[ref]$pt) | Out-Null
[LSeq]::SetForegroundWindow($h) | Out-Null
function Click($x,$y) {
  [LSeq]::SetCursorPos($pt.X + $x, $pt.Y + $y) | Out-Null
  Start-Sleep -Milliseconds 250
  [LSeq]::mouse_event(0x0002,0,0,0,[UIntPtr]::Zero)
  Start-Sleep -Milliseconds 120
  [LSeq]::mouse_event(0x0004,0,0,0,[UIntPtr]::Zero)
}
Click 165 196; Start-Sleep -Seconds 6
Click 385 362; Start-Sleep -Seconds 7
Click 58 458; Start-Sleep -Seconds 2
Click 81 264; Start-Sleep -Seconds 2
Click 211 291; Start-Sleep -Seconds 12
Click 400 323; Start-Sleep -Milliseconds 700
Click 625 457; Start-Sleep -Seconds 8
"seq done"
