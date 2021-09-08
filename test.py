import os
from os import PRIO_USER

os.sys.path.append("build/bin")

import mytestlib as mtl

import time

print(mtl.__doc__)

mydog = mtl.myDog("one", 2.0)

print(mydog.current_position())

mydog.add(3.0)
print(mydog.current_position())

mydog.sub(1.0)

print(mydog.current_position())

print(mydog.position)

mydog.position = 8.0

print(mydog.current_position())
