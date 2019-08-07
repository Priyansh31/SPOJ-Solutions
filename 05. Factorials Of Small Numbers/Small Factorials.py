'''
  ' STATS:
  '		Runtime - 0.10
  '		Memory - 4468 MB
  ' 	Language - Java
  '''
  
'''
  ' The input begins with an integer T (1 <= T <= 100)
  ' This is followed by T lines, each line having one integer N.
  '
  '	For each one of the T lines, print N!
  '''

  
cases = int(input())

while cases > 0:
	num = int(input())
	ans = 1
	while num > 0:
		ans *= num
		num -= 1
		
	print(ans)
	
	cases -= 1