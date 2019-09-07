"""
	STATS:
		Runtime - 0.07
		Memory - 9.1 MB
		Langauage - Python 3.7.3
		
		Runtime - 0.07
		Memory - 9.2 MB
		Langauage - Python 3.7.3
"""

if __name__ == '__main__':
	# Getting the loop count
	loopCount = int(input())

	for i in range(loopCount):
		# Creating an array of integers using the input. Since the input is space separated,
		#  the delimiter for the input function in python can't be changed. Thus, getting the 
		#  entire line as input, then splitting it based on the space, converting it into
		#  string and using these string to create a list.
		inputArray = list(map(str, input().split()))
		
		# Once this is done, the list will comprise of two strings, each of these strings 
		#  will be an integer. Simply, reversing these strings, converting them into 
		#  integers and adding them to get the reuslt.
		inputArray[0] = inputArray[0][::-1]
		inputArray[1] = inputArray[1][::-1]
		
		# Calculating the result as the sum of two integers, converting it into a string and 
		#  then reversing the new string to get the final result. However, this result will
		#  also contain leading zeros, to get rid of them, using the `lstrip()` function.
		result = str(int(inputArray[0]) + int(inputArray[1]))[::-1].lstrip('0')
		print(result)