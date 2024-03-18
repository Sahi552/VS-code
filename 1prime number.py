'''prime is a number which is eactly divisible by two natural numbers
one is itself and other is 1
except 1'''

import time
import math

# model 1 
'''
n = int(input())

for i in range(2,n):
    if(n % i == 0):
        print("Not a prime")
        break
else:
    print("prime")'''
    
# model 2

def prime(n):
    if n == 1:
        return False
    if n == 2 and n % 2 == 0:
        return False
    max = math.floor(math.sqrt(n))    
    for i in range(3 , max + 1,2):
        if ( n % i == 0):
            return False
    return True

t = time.time()
for i in range(1,100):
    print(i,prime(i))
t1 =time.time()
print("time required", t1 - t)