a=[3,4,5,6]
target=7

dp=[False for _ in range(target+1)]

dp[0]=True
for i in range(0,target+1):
  if dp[i]==True:
    for j in range(len(a)):
      if i+a[j]<target+1:
        dp[i+a[j]]=True
          
print(dp)
print(dp[target])