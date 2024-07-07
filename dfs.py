def dfs(adj,vis,index):
  vis[index]=1
  max=0
  c=0
  for i in adj[index]: 
    if vis[i]==0:
      c=1+dfs(adj,vis,i)
      # print(c)
      if c>max:
        max=c
  vis[index]=0
  return max
  


n=10
e=7
edges=[[1,2],[2,3],[3,4],[4,5],[6,7],[7,1],[8,10]]
adj=[[] for i in range(n)]
for i in edges:
  adj[i[0]-1].append(i[1]-1)

vis=[0 for i in range(n)]
maxi=0
c=0
print(adj)
for i in range(n):
  if vis[i]==0:
    c=dfs(adj,vis,i)
    if c!=0:
      c+=1
    # print(i,c)
    if c>maxi:
      maxi=c
print(maxi)