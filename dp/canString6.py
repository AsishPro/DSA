def strings(s, arr, index):
    if index == len(s):
        return [[]] 

    temp = []  
    for word in arr:
        word_length = len(word)
        if index + word_length <= len(s) and s[index:index + word_length] == word:
            res = strings(s, arr, index + word_length)
            for sublist in res:
                # temp.append([word, *sublist])  
                temp.append([word]+sublist)
                # sublist.insert(0,word)
                # temp.append(sublist)
    return temp

s = 'abcdef'
arr = ["ab", "abc", "cd", "def", "abcd", "ef"]
result = strings(s, arr, 0)

if result:
    print(result)
else:
    print("No valid segmentation found")
