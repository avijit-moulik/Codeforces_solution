def solve_test_case():
    x = int(input())
    a = input()
    b = input()
    c = input()

    for i in range(x):
        if a[i] != c[i] and b[i] != c[i]:
            print("YES")
            return

    print("NO")


t = int(input())
for _ in range(t):
    solve_test_case()
