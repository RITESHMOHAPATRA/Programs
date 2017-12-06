t = int(input())
for i in range(0,t):
	n,q = input().split()
	l = input().split()
	prod = 1
	for i in l:
		prod = prod * int(i)
	query = input().split()
	for i in query:
		print(int(i)//prod,end = " ")
	print()
