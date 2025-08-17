import random

A=[9669,9996,9999]
num=random.choice(A)
# print(num)
digits = list(map(int, str(num)))  #Iterates over each character '2', '7', '3';Converts each to an integer: 2, 7, 3
# print(digits)
for i in range (len(digits)):
   if digits[i]==6:
      digits[i]=9
      break
max=int(''.join(map(str,digits)))
print(max)
print(num)



