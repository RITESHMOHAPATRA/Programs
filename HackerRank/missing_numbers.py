from collections import Counter
import pprint


def missing_number(l1,l2):
    freq1 = Counter(l1)
    freq2 = Counter(l2)

    missingNumber = []

    for num in l2:
        if num not in l1 or freq1[num] != freq2[num]:
            if num not in missingNumber:
                missingNumber.append(num)

    for num in sorted(missingNumber):
        print(num,end = " ")
# Take input
len1 = int(input())
l1 = list(map(int,input().strip().split(' ')))

len2 = int(input())
l2 = list(map(int,input().strip().split(' ')))

missing_number(l1,l2)
