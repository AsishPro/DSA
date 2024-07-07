n=15
m=[1 for i in range(n)]
p=2
while p*p<n:
    if m[p]==1:
       for i in range(p*p,n,p):
            m[i]=0
            p+=1
    lt=[]
    c=0
    for i in range(2,len(m)):
        if m[i]==1:
            c+=1
            print(i,end=' ')