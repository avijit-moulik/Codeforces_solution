u = ''
s = str(input())

n = len(s)
c = True  


for i in range(1,n):
    if s[i].islower(): 
            c = False

if c == True:
    for j in range(0,n):
        if s[j].islower():  
            u += s[j].upper()  
        else:
            u += s[j].lower()  
    print(u)
else:
    print(s)
