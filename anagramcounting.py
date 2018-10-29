import sys

def fact(num):
	ans = 1
	for i in range(1,num+1):
		ans = ans * i
	
	return ans
	
for _input in sys.stdin:
	s = str(_input.split()[0])
	num = int(len(s))

	lst = [0] * 60

	n = fact(num)

	for i in s:
		lst[ord(i) - ord('A')] += 1

	d = 1
	for i in lst:
		d *= fact(i)
		
	print(n//d)
	

