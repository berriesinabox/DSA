import random

a=[123,-123,120]
b=random.choice(a)
print(b)
if b<0:
    b=b*(-1)
    c=int(str(b)[::-1])
    c=c*(-1)
    print(c)
else:
    c=int(str(b)[::-1])
    print(c)