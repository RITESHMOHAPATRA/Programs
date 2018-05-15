def fibonacci(n):
    fib = []
    fib.append(1)
    fib.append(1)

    for i in range(2,n):
        fib.append(fib[i-1] + fib[i-2])
    return (fib[n-3],fib[n-2])

t = int(input())
const = (10 ** 9) + 7
for testcase in range(t):
    m,n= input().rstrip().split(' ')
    m,n = int(m),int(n)

    a = [int(num) for num in input().rstrip().split(' ')]
    b = [int(num) for num in input().rstrip().split(' ')]

    x,y = fibonacci(n)

    if n > 2:
        result = (m * ((x * sum(a)) + (y * sum(b)))) % const
    elif(n == 2):
        result = m * (sum(b))
    else:
        result = m * (sum(a))
    print(result)
