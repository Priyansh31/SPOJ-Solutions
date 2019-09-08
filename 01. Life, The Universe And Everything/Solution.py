"""
	STATS:
		Runtime - 0.02
		Memory - 9.2 MB
		Language - Python 3.7.3
"""

if __name__ == '__main__':
	# Running an infinite loop
	while True:
		# Taking input from the user and type-casting it into integer
		number = int(input())
		
		# Checking, if `number` is 42, breaking out of the loop
		if number == 42:
			break
	
		# If the number is not 42, printing the number as it is.
		print(number)