import sys

MOD = 1000000007

def getCount(N, M, S):
    dp = [[[0] * (M + 1) for _ in range(N + 1)] for _ in range(N + 1)]
    dp[0][0][0] = 1
    
    for i in range(N):
        for j in range(N + 1):
            for k in range(M + 1):
                if dp[i][j][k] == 0:
                    continue
                
                if j + 1 <= N:
                    if k < M and S[k] == '(':
                        dp[i + 1][j + 1][k + 1] = (dp[i + 1][j + 1][k + 1] + dp[i][j][k]) % MOD
                    else:
                        dp[i + 1][j + 1][k] = (dp[i + 1][j + 1][k] + dp[i][j][k]) % MOD
                
                if j > 0:
                    if k < M and S[k] == ')':
                        dp[i + 1][j - 1][k + 1] = (dp[i + 1][j - 1][k + 1] + dp[i][j][k]) % MOD
                    else:
                        dp[i + 1][j - 1][k] = (dp[i + 1][j - 1][k] + dp[i][j][k]) % MOD
    
    return dp[N][0][M]


result = getCount(6, 1, ")(")
print(result)
