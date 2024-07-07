import numpy as np
def gridtraveller(m,n,i,j,dp):
  if i==m-1 or j==n-1:
    return 1
  if dp[i][j]!=-1:
    return dp[i][j]
  a=gridtraveller(m,n,i+1,j,dp)
  b=gridtraveller(m,n,i,j+1,dp)
  
  return a+b

dp=np.full((3,2),-1)
print(gridtraveller(3,2,0,0,dp))
