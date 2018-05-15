from functools import reduce
from fractions import gcd

t = int(input())

for i in range(t):
    n = int(input())
    l = list(map(int,input().rstrip().split(' ')))

    GCD = reduce(lambda x,y:gcd(x,y),l)

    if(GCD == 1):
        print(0)
    else:
        print(-1)
