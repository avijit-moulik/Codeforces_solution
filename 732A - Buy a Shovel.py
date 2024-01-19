def mf(k, r):
    i = 1
    while (i * k - r) % 10 != 0 and i * k % 10 != 0:
        i += 1
    return i

def main():
    k, r = map(int, input().split())
    ans = mf(k, r)
    print(ans)

if __name__ == "__main__":
    main()
