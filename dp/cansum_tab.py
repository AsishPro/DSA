# a=[3,4,5,6]
# target=7

# first do for true or false


a=[754,463,575,21,771,842,659,227,460,99,531,162,292,827,979,10,600,393,688]
target=500

a.sort()
print(a)

dp=[False for _ in range(target+1)]

dp[0]=True
for i in range(1,target+1):
  for j in range(len(a)):
    if i-a[j]>=0:
      if dp[i-a[j]]:
        dp[i]=dp[i-a[j]]
        
print(dp)
print(dp[target])
      