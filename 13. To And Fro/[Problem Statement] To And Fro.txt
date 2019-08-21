		To And Fro


Question:

	Mo and Larry have devised a way of encrypting messages. They first decide secretly on the number of columns and write the message (letters only) down the columns, padding with 
	extra random letters so as to make a rectangular array of letters. For example, if the message is “There’s no place like home on a snowy night” and there are five columns, 
	Mo would write down:

			t o i o y
			h p k n n
			e l e a i
			r a h s g
			e c o n h
			s e m o t
			n l e w x

	In this example, Mo used the character ‘x’ to pad the message out to make a rectangle, although he could have used any letter. Mo then sends the message to Larry by writing the 
	letters in each row, alternating left-to-right and right-to-left. So, the above would be encrypted as:
			
			`toioynnkpheleaigshareconhtomesnlewx`
			
	Your job is to recover for Larry the original message (along with any extra padding letters) from the encrypted one.


Input:
	Each input set consists of two lines, the first line contains an interger `n` denoting the number of columns for the table!
	The following line contains a string `s` which has to be decrypted!
	
	When the integer `n` equals 0, this means that this is the last line of the input! Following this, there shall be no input!
	
CONSTRAINTS:
	The encrypted string `s` shall only consist of lower case alphabets!
	
Example:
	INPUT:
		5
		toioynnkpheleaigshareconhtomesnlewx
		3
		ttyohhieneesiaabss
		0

	OUTPUT:
		theresnoplacelikehomeonasnowynightx
		thisistheeasyoneab
