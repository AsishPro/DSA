def canSum(target,a,ans,temp):
  if(target==0):
    temp.append(ans[::])
    return 1
  for i in range(len(a)):
    if target-a[i]>=0:
      ans.append(a[i])
      canSum(target-a[i],a,ans,temp)
      ans.pop()
  return 0
  
a=[5,3,4,7]
target=7
ans=[]
temp=[]
canSum(target,a,ans,temp)
print(ans)
print(temp)

