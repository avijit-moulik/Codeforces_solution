n = int(input())
per = list((map(int,input().split())))
ans = [0]*n
for i in range(n):
    ans[per[i]-1]=i+1
    
print(*ans) 
