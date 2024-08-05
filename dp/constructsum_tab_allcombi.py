a=[3,4,5,6]
target=7

dp=[None for _ in range(target+1)]

dp[0]=[[]]
for i in range(1,target+1):
  for j in range(len(a)):
    if i-a[j]>=0:
      if dp[i - a[j]] is not None:
        for k in dp[i-a[j]]:
          temp=[a[j]]+k
          if dp[i] is None:
            # why bracket?: to provide a list
            dp[i]=[temp]
          else:
            dp[i].append(temp)
      

print(dp)
print(dp[target])
      