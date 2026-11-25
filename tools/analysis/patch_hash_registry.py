import re
p = "runtime/wasm/imports.c"
s = open(p, encoding="utf-8").read()
old = '''static u32 g_blocks[65536];
static int g_nblocks;
static void block_add(u32 p) { if (p && g_nblocks < 65536) g_blocks[g_nblocks++] = p; }
static int block_take(u32 p)
{
    for (int i = 0; i < g_nblocks; ++i) if (g_blocks[i] == p) { g_blocks[i] = g_blocks[--g_nblocks]; return 1; }
    return 0;
}
'''
new = '''#define BLK_HASH (1u << 20)
static u32 g_blocks[BLK_HASH];
static void block_add(u32 p)
{
    if (!p) return;
    u32 i = (p >> 4) & (BLK_HASH - 1), tomb = 0xFFFFFFFFu;
    for (;;) {
        u32 v = g_blocks[i];
        if (!v) { if (tomb != 0xFFFFFFFFu) i = tomb; g_blocks[i] = p; return; }
        if (v == p) return;
        if (v == 0xFFFFFFFFu && tomb == 0xFFFFFFFFu) tomb = i;
        i = (i + 1) & (BLK_HASH - 1);
    }
}
static int block_take(u32 p)
{
    if (!p) return 0;
    u32 i = (p >> 4) & (BLK_HASH - 1);
    for (;;) {
        u32 v = g_blocks[i];
        if (!v) return 0;
        if (v == p) { g_blocks[i] = 0xFFFFFFFFu; return 1; }
        i = (i + 1) & (BLK_HASH - 1);
    }
}
'''
assert old in s
s = s.replace(old, new)
open(p, "w", encoding="utf-8", newline="").write(s)
print("hash registry patched")
