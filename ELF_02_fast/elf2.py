from ast import IsNot
import wget
import os
import sys

res = ""

str = sys.argv[1]

for c in str: 
    c = chr(ord(c) - 1)
    res += c

print(res[0:20], end="")
