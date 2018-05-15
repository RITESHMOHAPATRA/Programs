from operator import xor
from functools import reduce
t = int(input())

for test in range(t):
    n = int(input())
    a = list(map(int,input().rstrip().split(' ')))
    result = (reduce(lambda x,y:xor(x,y),a)) * 2
    print(result)
