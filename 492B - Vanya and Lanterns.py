def mf(n, l, z):
    z.sort()
    mg = 0
    mg = max(mg, z[0])
    mg = max(mg, l - z[-1])
    
    for i in range(1, n):
        gap = z[i] - z[i - 1]
        mg = max(mg, gap / 2)

    return mg

def main():
    n, l = map(int, input().split())
    z = list(map(int, input().split()))

    result = mf(n, l, z)
    print("{:.10f}".format(result))

if __name__ == "__main__":
    main()
