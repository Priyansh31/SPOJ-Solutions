'''
  ' STATS:
  '		Runtime - 0.98
  '		Memory - 28 MB
  ' 	Language - Python 3
  '''
  
'''
  '	There is a single positive integer T on the first line of input (equal to about 100000). 
  ' It stands for the number of numbers to follow. 
  '	Then there are T lines, each containing exactly one positive integer number N, 1 <= N <= 1000000000.
  '
  ' For each case 'T', print the number of trailing zeroes in T! [T factorial]
  '''

cases = int(input())

while (cases > 0):
	cases -= 1
	num = int(input())
	
	i = 1
	fiveDiv = 0
	storage  = 1

	while int(num/storage) > 0:
		storage = 5 ** i
		i += 1
		fiveDiv += int(num/storage)

	print(fiveDiv)