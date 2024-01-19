def mf(a, b, c):
    p = [a, b, c]
    p.sort()
    return p[2] - p[0]

def main():
    a, b, c = map(int, input().split())
    ans = mf(a, b, c)
    print(ans)

if __name__ == "__main__":
    main()
