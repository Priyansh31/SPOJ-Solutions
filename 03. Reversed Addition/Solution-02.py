"""
	STATS:
		Runtime - 0.09
		Memory - 9.2 MB
		Language - Python 3.7.3
		
		Runtime - 0.10
		Memory - 9.1 MB
		Language - Pyhton 3.7.3
"""

def reverseNumber(value: int) -> int:
	"""
		This function will be used to get the reverse of `value`. If `value` is not an integer
		number, then the function will return the input, else, the number will be reversed and 
		then returned.
		
		:param value: The integer number that is to be reversed.
		:returns: The reverse of `value` will be returned as an integer, or `value` itself will be returned if it is not an integer.
	"""

	# If `value` is not an integer, returning whatever was passed in.
	if not isinstance(value, int):
		return value
	
	# Creating a variable that will store the reversed number and initializing it 
	result = 0
	
	# Running a loop that will keep running till `value` becomes 0.
	while value > 0:
		result *= 10
		
		# Getting the last digit from `value` and adding it to `result`.
		result += value % 10
		
		# To not enter an infinite loop, changing value of `value`.
		value = int(value/10)

	# By the time the loop ends, the reverse of `value` will be stored in `result`
	return result


if __name__ == '__main__':
	# Getting the loop count
	loopCount = int(input())

	for i in range(loopCount):
		# Creating an array of integers using the input. Since the input is space separated,
		#  and the delimiter for the input function in python can't be changed. Thus, getting the 
		#  entire line as input, then splitting it based on the space, converting it into
		#  integers and using these integers to create a list.
		inputArray = list(map(int, input().split()))
	
		# Using the custom function defined above to reverse the integers.
		inputArray[0] = reverseNumber(inputArray[0])
		inputArray[1] = reverseNumber(inputArray[1])
		
		# Adding the reversed integers and then reversing their sum using the function
		print(reverseNumber(inputArray[0] + inputArray[1]))
		