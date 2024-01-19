def max_cut_pieces(n, a, b, c):
    dp = [0] + [-1e9] * n

    for i in range(1, n + 1):
        if i >= a:
            dp[i] = max(dp[i], dp[i - a] + 1)
        if i >= b:
            dp[i] = max(dp[i], dp[i - b] + 1)
        if i >= c:
            dp[i] = max(dp[i], dp[i - c] + 1)

    return dp[n]

def main():
    n, a, b, c = map(int, input().split())
    
    result = max_cut_pieces(n, a, b, c)
    print(result)

if __name__ == "__main__":
    main()
