def mf(n, k):
    t = 240 - k
    p = 0

    for i in range(1, n + 1):
        t -= 5 * i
        if t >= 0:
            p += 1
        else:
            break

    return p

def main():
    n, k = map(int, input().split())
    
    ans = mf(n, k)
    print(ans)

if __name__ == "__main__":
    main()
