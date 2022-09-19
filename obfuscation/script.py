from ast import IsNot
import os

i = 99

while i != 1000:
    os.system("./simple_binary " + str(i))
    i += 1
