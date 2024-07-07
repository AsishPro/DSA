def combinationSum(a, target):
        dp=[0 for i in range(target+1)]
        dp[0]=0
        # candidates.sort()
        for i in range(1,target+1):
            for j in range(len(a)):
                if i-a[j]>=0:
                    dp[i]=dp[i]+dp[i-a[j]]
        return dp[target]
      
#can sort and break to reduce more time complexity