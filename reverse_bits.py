def reverse_mybits(num):
	b= bin(num)
	rev = b[-1:1:-1]
	rev = rev + (32 - len(rev)) * '0'
	return int(rev,2) 

if __name__ == '__main__':
	l = []
	while True:
		try:
			s = input()
			n = int(s)
		except:
			break
		l.append(reverse_mybits(n))
	if len(l)==1:
		print(l[0])
	else:
		print(str(tuple(l))[1:-1])