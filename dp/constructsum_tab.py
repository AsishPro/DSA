a=[3,4,5,6]
target=7

dp=[-1 for _ in range(target+1)]

dp[0]=[]
for i in range(1,target+1):
  for j in range(len(a)):
    if i-a[j]>=0:
      if dp[i-a[j]]!=-1:
        dp[i]=[a[j]]+dp[i-a[j]]
        print(dp[i],i,a[j],dp[i-a[j]])
        break
      
# without break new update will update old one.
print(dp)
print(dp[target])
      