import time

n=int(input("enter the number you want to check: "))

start=time.time()
def pal(n):
    if n < 0:
        return False
    
    org=n
    reverse=0

    while n>0:
        dig=n%10
        reverse=reverse*10+dig
        n//=10

    return org==reverse
result=pal(n)
print("time taken is " ,time.time()-start)
print("palindrome: ", result)
        

        