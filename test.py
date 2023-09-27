MOD = 1000000007

def count_ways(n, s1, s2):
    dp = [[[[0 for _ in range(3)] for _ in range(3)] for _ in range(3)] for _ in range(n+1)]

    def rec(row, col, prev, prev_prev):
        if row == n:
            return 1

        if dp[row][col][prev][prev_prev] != 0:
            return dp[row][col][prev][prev_prev]

        ans = 0

        if row == 0:
            # First row, can use any color
            for c1 in range(3):
                for c2 in range(3):
                    if c1 != c2:
                        ans += rec(row, col+1, c1, c2)
                        ans %= MOD
        else:
            # For subsequent rows, check the colors of the previous two dominoes and use a different color
            for c in range(3):
                if prev != c:
                    ans += rec(row, col+1, c, prev)
                    ans %= MOD

        dp[row][col][prev][prev_prev] = ans
        return ans

    return rec(0, 0, 3, 3)  # Start with row 0, col 0, and set the previous and previous_previous colors to invalid (3)

# Input
N = int(input())
S1 = input().strip()
S2 = input().strip()

# Output
print(count_ways(N, S1, S2))
