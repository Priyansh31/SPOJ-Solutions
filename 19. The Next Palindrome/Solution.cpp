/**
  * STATS:
  *		Runtime - 0.0
  *		Memory - 5.1 MB
  *		Language - C++ 14
  */

#include <iostream>

/**
 * This function will be used to increment a digit in a string. It will take the entire string and the position which 
 * needs to be incremented as the input. This function will then directly increment the value at that position if the 
 * value is less than 9. If the value is 9, then this function will set it as 0 and increment `position-1` similarly.
 */
std::string addDigit(std::string inputString, int position)	{
	// Creating an infinite loop.
	while (true)	{
		// Checking the value at `position`
		if (inputString.at(position) < '9')	{
			// If the value at `position` is less than 9, directly increment it and break out of the loop.
			inputString.at(position) = (char) inputString.at(position) + 1;
			break;
		} if (position == 0 && inputString.at(position) == '9')	{
			inputString.at(position) = '0';
			inputString = '1' + inputString;
			break;
		}
		
		// If the value at `position` is 9, then setting it to be 0, and updating the position to now increment `position-1`
		inputString.at(position) = '0';
		position -= 1;
	}
	
	// By now the modifications have been made to the string. So, imsply returning the string
	return inputString;
}

int main() {
	// Detaching the connection between stdio and console-io. This will make both the classes much faster, but 
	// can cause errors if both of them later used in the same program.
	std::ios_base::sync_with_stdio(false);
	
	// Taking input for the number of testcases.
	unsigned int testCases;
	std::cin >> testCases;
	
	while (testCases--)	{
		// Declaring a static string. To ensure time is not wasted in allocating and deallocating space for the 
		// string, making the string as static, ensuring that the string isn't destroyed in between the loops. 
		static std::string input;
		std::cin >> input;
		
		// Avoid using `endl` to ensure no extra callback is induced to refresh buffer. It'll just waste time.
		
		// Declaring label for a goto statement. Beware, goto statements are generally discouraged and should not
		// be used unless you know what you're doing.
		top:
		
		// If the input is a single digit number and is not 9, then printing the next greatest number as the result.
		if (input.length() == 1 && input.at(0) != '9')	{
			std::cout << (char) (input.at(0) + 1) << "\n";
			continue;		// Once the output has been printed, skipping over to the next iteration of the loop.
		}
		
		// If the flow-of-control reaches this part, then the input is a normal number and thus, finding its next greatest palindrome
		// Declaring a vairable to keep a track of the number of changes made to the input.
		static unsigned long changes_made;
		changes_made = 0;		// Initializing separately as the above line will be skipped after it's executed once due to `static`.
		
		// Looping through the entire string. Checking variables from the extreme left and extreme right.
		for (unsigned long i = 0, j = input.length()-1; i < j; i++, j--)	{
			// Using long above as the length of the string can be upto 10E6, which will be too big for integers.
			// If the two inputs are not the same, then changing them as required.
			if (input.at(i) != input.at(j))	{
				// Since changes are to be made here, updating the counter for the number of changes made.
				changes_made++;
				
				// Storing the right character in a temporary character.
				static char temp;
				temp = input.at(j);
				
				// Setting the right character to be equal to the left.
				input.at(j) = input.at(i);
				
				// Checking if the character has been reduced, if so, the character on the left of `j` will be incremented.
				if (input.at(j) < temp)	{
					// If the flow-of-control reaches this part, then the variable was reduced in value.
					// Updating the lefter-value of `j`.
					if (input.at(j-1) < '9')
						// If the digit is less than 9, then simply incrementing the same.
						input.at(j-1) = (char) input.at(j-1) + 1;
					else
						// If the digit was 9, then incrementing it using the special method.
						input = addDigit(input, j-1);
					
					// Setting this test case to be rechecked.
					i--;
					j++;
				}
			}
		}
		
		// If no changes have been made till this point, then it means that the number is a palindrome. Thus, incrementing the number
		// by `1` and sending it back up (using the label) to find the next smallest palindrome.
		if (changes_made == 0) {
			input = addDigit(input, input.length()-1);
			goto top;
		}
		
		// Printing the output to the screen.
		std::cout << input << "\n";
	}
	
	return 0;
}