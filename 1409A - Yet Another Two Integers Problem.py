def mf(a, b):
    d = abs(a - b)
    c = (d + 9) // 10
    return c

def main():
    t = int(input())

    for _ in range(t):
        a, b = map(int, input().split())
        ans = mf(a, b)
        print(ans)

if __name__ == "__main__":
    main()
