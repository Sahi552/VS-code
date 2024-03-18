a = [8,4,6,2,9]
a.sort()
print(a)
b = len(a) -1
c=0
d = len(a)
for i in a:
    if b < d:    
        c+=i  
print(c)
