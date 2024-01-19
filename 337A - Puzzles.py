def mf(n, m, p):
    p.sort()

    md = float('inf')

    for i in range(m - n + 1):
        d = p[i + n - 1] - p[i]
        md = min(md, d)

    return md

def main():
    n, m = map(int, input().split())
    p = list(map(int, input().split()))

    ans = mf(n, m, p)
    print(ans)

if __name__ == "__main__":
    main()
