def comparerecords(r1,r2):
    if r1!=r2:
        return r1[2]-r2[2]
  
    
data = [
    ["asish", 7, 89],
    ["manoj", 2, 99],
    ["asi", 1, 89],
    ["asis", 9, 95],
    ["manoj", 5, 100],
    ["manoj", 6, 100],
]

# data.sort(key=lambda x:(x[2],x[0],x[1]))
# data=sorted(data, key=lambda x: (-x[2], x[0], x[1]))
# can also do using dataframe.

sorted(data,key=comparerecords)
print(data)