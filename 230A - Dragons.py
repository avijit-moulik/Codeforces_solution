def mf(s, d):
    d.sort(key=lambda x: x[0])  

    for d in d:
        if s > d[0]:
            s += d[1]
        else:
            return "NO"
    
    return "YES"

def main():
    s, n = map(int, input().split())
    d = [tuple(map(int, input().split())) for _ in range(n)]

    ans = mf(s, d)
    print(ans)

if __name__ == "__main__":
    main()
