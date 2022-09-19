from ast import IsNot
import wget
import os
import sys

res = ""

newArg1 = sys.argv[1][0 : -1]
newArg2 = sys.argv[2][0 : -1]

str = newArg1 + newArg2

i = 0
check = 0

for c in str: 
    if i == 4 and check == 0:
        c = chr(ord(c) + 5)
        check = 1
    elif i % 2 == 0 and check == 0:
        c = chr(ord(c) + 2)
    elif check == 0:
        c = chr(ord(c) + 3)
    else:
        c = chr(ord(c))
    res += c
    i += 1

print(res[0:16], end="")
