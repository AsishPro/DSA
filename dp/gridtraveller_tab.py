import numpy as np
# always try to think of tabulation.

n=3
m=3
dp=[[0 for i in range(n+1)] for j in range(m+1)]

dp[m-1][n-1]=1
print(dp)
for j in range(n):
  dp[m-1][j]=1
for j in range(m):
  dp[j][n-1]=1

for i in range(m-2,-1,-1):
  for j in range(n-2,-1,-1):
    dp[i][j]=dp[i+1][j]+dp[i][j+1]
    

