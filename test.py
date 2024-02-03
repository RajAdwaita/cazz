
def find_lcs(s1, s2):

    n = len(s1)
    m = len(s2)
    dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if s1[i - 1] == s2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j])

    lcs = ""
    i = n
    j = m
    while i > 0 and j > 0:
        if s1[i - 1] == s2[j - 1]:
            lcs += s1[i - 1]
            i -= 1
            j -= 1
        elif dp[i][j] == dp[i][j - 1]:
            j -= 1
        else:
            i -= 1

    return lcs[::-1]

def minimum_cost_to_make_strings_equal(s1, s2, x):

    lcs = find_lcs(s1, s2)
    cost1 = (len(s1) - len(lcs)) * 1 + (len(s2) - len(lcs)) * 1
    cost2 = (len(s1) - len(lcs)) * x + (len(s2) - len(lcs)) * 1
    min_cost = min(cost1, cost2)
    if min_cost >= x:
            return -1
    return min_cost



if __name__ == "__main__":
    s1 = "1100011000"
    s2 = "0101001010"
    x = 2

    min_cost = minimum_cost_to_make_strings_equal(s1, s2, x)
    if min_cost == -1:
        print("It is impossible to make the two strings equal.")
    else:
        print("The minimum cost to make the two strings equal is:", min_cost)
