t = 1
 
for _ in range(t):
    n, q = map(int, input().split())
    p = list(map(int, input().split()))
    a=[0]*(n+1)
    for i in range(1,1+n):
      a[i]=p[i-1]
 
    for _ in range(q):
        k = int(input())
        ans = 0
        c = a.copy()
 
        for j in range(60, -1, -1):
            u = 0
            b = c.copy()
 
            for i in range(1, n + 1):
                if not ((c[i] >> j) & 1):
                    p = c[i]
                    c[i] += (1 << j)
                    c[i] //= (1 << j)
                    c[i] *= (1 << j)
                    u += (c[i] - p)
                    if u > k:
                        break
 
            if u <= k:
                k -= u
                ans += (1 << j)
            else:
                c = b.copy()

        print(ans)


