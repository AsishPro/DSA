def combinationSum(a, target):
        dp=[0 for i in range(target+1)]
        dp[0]=0
        # candidates.sort()
        for i in range(1,target+1):
            for j in range(len(a)):
                if i-a[j]>=0:
                    dp[i]=dp[i]+dp[i-a[j]]
        return dp[target]
      
print(combinationSum([754,463,575,21,771,842,659,227,460,99,531,162,292,827,979,10,600,393,688],500))

#can sort and break to reduce more time complexity

# class Solution(object):
#     def combinationSum4(self,a, target):
#         dp=[0 for i in range(target+1)]
#         dp[0]=1
#         a.sort()
#         for i in range(1,target+1):
#             for j in range(len(a)):   
#                 if i>=a[j]:
#                     dp[i]=dp[i]+dp[i-a[j]]
#                 else:
#                     break

#         return dp[target]