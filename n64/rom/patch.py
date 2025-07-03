import hashlib
import os
import bsdiff4

def read_file(path):
        with open(path, 'rb') as fi:
            data = fi.read()
        return data

bsdiff4.file_diff("Diddy Kong Racing (USA) (En,Fr).z64", "DKRPatch.n64", "Diddy_Kong_Racing.patch")
if os.path.isfile("DKRPatch.n64"):
    rom = read_file("DKRPatch.n64")
print(hashlib.md5(rom).hexdigest())


