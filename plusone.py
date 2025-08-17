# n=int(input("enter the number: "))
# A=n+1
# B=[]

# for i in range (A):
#     while n > 0:
#         P=n %10
#         B.append(P)
# q=len(B)
# c=[]
# for i in range(B):
#     c[i]=B[q-1]
#     q=q-1
# print(c)

n = int(input("Enter the number: "))
A = n + 1   # n+1 number
B = []

temp = A
while temp > 0:
    digit = temp % 10
    B.append(digit)
    temp //= 10

B.reverse()  # so digits are in original left-to-right order

print(B)
