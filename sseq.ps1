$names = (Get-Content pipeline\sos_args.json -Raw | ConvertFrom-Json | Get-Member -MemberType NoteProperty | ForEach-Object { $_.Name }) -join ","
$env:RECOMP_LOGAPI = $names
$src = @"
using System;
using System.Runtime.InteropServices;
public class SSeq {
  [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, uint dx, uint dy, uint d, UIntPtr e);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
}
"@
Add-Type -TypeDefinition $src
$p = Start-Process -FilePath "D:\Games\CASINO4\HoyleCasino4.exe" -WorkingDirectory "D:\Games\CASINO4" -RedirectStandardError "G:\Development\RE Crap\Casino4\build\sos_desk2.err" -PassThru
Start-Sleep -Seconds 5
$h = $p.MainWindowHandle
$pt = New-Object SSeq+POINT
[SSeq]::ClientToScreen($h,[ref]$pt) | Out-Null
[SSeq]::SetForegroundWindow($h) | Out-Null
function Click($x,$y) {
  [SSeq]::SetCursorPos($pt.X + $x, $pt.Y + $y) | Out-Null
  Start-Sleep -Milliseconds 250
  [SSeq]::mouse_event(0x0002,0,0,0,[UIntPtr]::Zero)
  Start-Sleep -Milliseconds 120
  [SSeq]::mouse_event(0x0004,0,0,0,[UIntPtr]::Zero)
}
Click 165 196; Start-Sleep -Seconds 6
Click 385 362; Start-Sleep -Seconds 7
Click 58 458; Start-Sleep -Seconds 2
Click 81 264; Start-Sleep -Seconds 2
Click 211 291; Start-Sleep -Seconds 12
Click 400 323; Start-Sleep -Milliseconds 700
Click 625 457; Start-Sleep -Seconds 8
"seq done pid=$($p.Id)"
Get-Content build\sos_desk2.err | Select-Object -Last 40
