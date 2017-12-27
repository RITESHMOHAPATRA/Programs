from collections import Counter

def compressString(s):
    c = Counter(s)
    cs = ""
    for character,frequency in sorted(c.items()):
        cs += character + str(frequency)
    return cs


s = input("Enter a string to be compressed:")
cs = compressString(s)

if len(s) > len(cs):
    print(cs)
else:
    print(s)
