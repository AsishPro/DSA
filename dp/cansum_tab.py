a=[4,5,6]
target=7
dp=[-1 for _ in range(target+1)]
# first do for true or false

dp[0]=1
for i in range(1,target+1):
  for j in range(len(a)):
    t=i-a[j]
    if t>=0:
      if dp[t]:
        dp[i]=dp[t]

print(dp)
      