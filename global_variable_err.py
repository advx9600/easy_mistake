aa.py
a1 = 1

bb.py 
from aa import *  
global a1 
a1 =2 
print("in bb a1=%d"%a1)

cc.py
from aa import * 
import bb   
print ("in cc a1=%d"%a1)

run
python cc.py
