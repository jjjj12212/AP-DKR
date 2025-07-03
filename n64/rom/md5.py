import hashlib
import os
import bsdiff4

def read_file(path):
        with open(path, 'rb') as fi:
            data = fi.read()
        return data

if os.path.isfile("Diddy_Kong_Racing2.patch"):
    rom = read_file("Diddy_Kong_Racing2.patch")
print(hashlib.md5(rom).hexdigest())


