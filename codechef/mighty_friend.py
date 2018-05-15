t = int(input())

for test in range(t):
    n,k = input().rstrip().split(' ')
    n,k = int(n),int(k)

    a = [int(num) for num in input().rstrip().split(' ')]
    b = 0
    status = False
    last_elem = False

    motu_elem = [a[i] for i in range(len(a)) if i % 2 == 0]
    tomu_elem = [a[i] for i in range(len(a)) if i % 2 != 0]

    while b!=(k+1) and not status and not last_elem:
        if(sum(tomu_elem) > sum(motu_elem)):
            status = True
        if(b == k):
            last_elem = True
        else:
            motu_max_index = motu_elem.index(max(motu_elem))
            tomu_min_index = tomu_elem.index(min(tomu_elem))

            motu_elem[motu_max_index],tomu_elem[tomu_min_index] = tomu_elem[tomu_min_index],motu_elem[motu_max_index]
        b += 1
    if(status):
        print("YES")
    else:
        print("NO")
