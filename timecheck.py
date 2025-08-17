# import time

# start= time.time()

# for i in range(1,101):
#     print(i)

# print(time.time()-start)

import time

start= time.time()
# name=input("enter your name: ")
name="gungun"
list=[]
for i in range(len(name)):
   print(i)
   list.append(name[i])
print(list)
print(time.time()-start)