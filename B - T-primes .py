import math
def p(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True
def tp(num):
    root = int(math.sqrt(num))
    return root * root == num and p(root)
def st(n, nums):
    results = []
    for num in nums:
        if tp(num):
            results.append("YES")
        else:
             results.append("NO")
    return results

if __name__ == "__main__":    
    n = int(input())
    a = list(map(int, input().split()))
    ans = st(n, a)
    for ans in ans:
        print(ans)
