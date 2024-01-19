def mf(n, m, t):
    cp = 1
    tt = 0

    for i in t:
        if i >= cp:
            tt += i - cp
        else:
            tt += n - (cp - i)

        cp = i

    return tt

def main():
    n, m = map(int, input().split())
    t = list(map(int, input().split()))

    ans = mf(n, m, t)
    print(ans)

if __name__ == "__main__":
    main()
