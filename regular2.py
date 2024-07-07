def getCount(N, S):
    if N % 2 != 0:
        return 0

    n = N // 2

    
    dp = [[[0 for _ in range(2)] for _ in range(n + 1)] for _ in range(2 * n + 1)]
    
    dp[0][0][0] = 1

    for i in range(2 * n):
        for j in range(n + 1):
            for k in range(2):
                if dp[i][j][k] == 0:
                    continue
                
      
                if j < n:
                    new_string = "(" * (j + 1) + ")" * (i - j) + "("
                    has_substring = 1 if S in new_string else 0
                    dp[i + 1][j + 1][k | has_substring] += dp[i][j][k]
                

                if j > 0:
                    new_string = "(" * j + ")" * (i - j + 1) + ")"
                    has_substring = 1 if S in new_string else 0
                    dp[i + 1][j - 1][k | has_substring] += dp[i][j][k]

    return dp[2 * n][0][1]


print(getCount(4, '()')) 
