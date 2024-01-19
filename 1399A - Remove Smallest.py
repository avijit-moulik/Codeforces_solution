def mf(n, a):
    a.sort()

    for i in range(1, n):
        if a[i] - a[i - 1] > 1:
            return "NO"

    return "YES"

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        ans = mf(n, a)
        print(ans)

if __name__ == "__main__":
    main()
