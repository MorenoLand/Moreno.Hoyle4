import struct
from capstone import *
d=open("orig/Casino4.exe","rb").read()
tb=d[0x400:0x400+0x231800]
for name,slot in (("StartSample",0x7112f4),("StopSample",0x711300),("SampleDone",0x7112e8),("SamplesPlaying",0x7112dc),("SetSampleVolume",0x711238),("GetSampleVolume",0x711244)):
    pat=b"\xff\x15"+struct.pack("<I",slot); i=tb.find(pat)
    print(name,hex(slot),"wrapper",hex(0x401000+i) if i>=0 else None)
