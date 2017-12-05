def isAlternating(s):
    for i in range(0,len(s) - 2):
        if(s[i] != s[i+2]):
            return False
    return True

def removeCharsFromString(s,l):
    for i in l:
        s = s.replace(i,"")
    if(isAlternating(s)):
        return (len(s))
    return(0)

def checkEveryCombination(s,l):
    length = [0]
    status = False
    for i in range(0,len(l)):
        for j in range(0,len(l)):
            if(i != j):
                temp_l = [char for char in l if char != l[i] and char != l[j]]
                leng = removeCharsFromString(s,temp_l)
                length.append(leng)
    return max(length)

def extractCharsInString(s):
    l = list(set([char for char in s]))
    return(checkEveryCombination(s,l))

size = int(input())
s = input()
print(extractCharsInString(s))
