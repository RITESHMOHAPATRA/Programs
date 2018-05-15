def common_child(s1,s2):
    storage = [[0 for x in range(len(s1) + 1)] for x in range(len(s2) + 1)]

    for i in range(len(s2) + 1):
        for j in range(len(s1) + 1):
            if i == 0 or j == 0:
                storage[i][j] = 0
            elif s2[i-1] == s1[j-1]:
                storage[i][j] = storage[i-1][j-1] + 1
            else:
                storage[i][j] = max(storage[i-1][j],storage[i][j-1])
    return storage[len(s2)][len(s1)]

s1 = input().rstrip()
s2 = input().rstrip()

print(common_child(s1,s2))
