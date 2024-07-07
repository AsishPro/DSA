def strings(s,arr,index):
    if index==len(s):
      return []
    res=[]
    temp=[]
    for i in range(len(arr)):
      word_length = len(arr[i])
      if index+word_length<=len(s) and s[index:index+word_length]==arr[i]:
          print(arr[i])
          res=strings(s,arr,index+word_length)
          if len(res)==0:
            res.append(arr[i])
            temp.append([arr[i]])
          else:
            for j in res:
              temp.append([arr[i]]+j)
          print(temp)
    return temp
  

s='abcdef'
arr=["ab","abc","cd","def","abcd","ef"]
result=strings(s,arr,0)
