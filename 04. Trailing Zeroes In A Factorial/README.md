		Trailing Zeroes In A Factorial
		
Question:
	
	You will be given an integer N indicating the number of testcases.
	This will be followed by N lines of input. Each line will contain one integer T.
	
	The output would be a single line containg the total number of trailing zeroes in T!
	
	
Constraints:
	N <= 100000 		[10E5]
	T >= 1
	T <= 1000000000		[10E9]
	
	
Example:-
	INPUT:
		6
		3
		60
		100
		1024
		23456
		8735373
		
	OUTPUT:
		0
		14
		24
		253
		5861
		2183837
		
	EXPLANATION:
		3! has no trailing zeroes, so the output will be one.
		Similarly, 60! has 14 trailing zeroes...
		

<LOGIC>
	We get a trailing zeroe only when we multiply a number by 10. The prime factors of 10 are 5 and 2.
	So, we will calculate the number of pairs of 2's and 5's formed for the particular number!
	
	For example, if we take 100 as the input.
	100 will be divided by powers of 5 until the answer is less than one.
	Thus 100 is divided by 5^1 and 5^2. If we divide 100 by 5^3 (125), the result would be zero -- if we take the result as an integer.
	Thus the answer would be 100/5 + 100/25 = 20 + 4 = 24
	
	When we follow the same idea with 2, 100 will be divided by powers of 2 until the answer is less than one.
	Thus 100 is divided by 2^1 and 2^2... 2^6, if we divide 100 by 2^7 (128), the result would be zero -- if we take the result as an integer.
	Thus the answer would be 100/2 + 100/4 + 100/8 + ... + 100/64 = 50 + 25 + 12 + 6 + 3 + 1 = 97
	
	Thus, with 5 the answer is 24, and with 2 the answer is 97.
	However, as we have only 24 5's, the number of pairs two's and five's formed would be 24 (the rest would be all 2's pairs as no 5 remains)
	Thus, 100 factorial will contain 24 zeroes!