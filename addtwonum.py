l1=[1,2,3]
l2=[4,5,6]
la=''.join(map(str,l1))
lb=''.join(map(str,l2))
# la1=int(str(la)[::-1])
# lb1=int(str(lb)[::-1])
sum=int(str(la)[::-1]) + int(str(lb)[::-1])
# fin=int(str(sum)[::-1])
# l3=[]
# for i in range (len(fin)):
#     l3[i]=append.fin(i)
l3 = list(map(int, str(sum)))
print(l3)