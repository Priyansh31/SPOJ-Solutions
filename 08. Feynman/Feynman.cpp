/**
  * STATS:
  *		Runtime - 0.0
  *		Memory - 4.1 MB
  *		Language - C++ 14
  */

#include <iostream>

// The maximum number of inputs that will be given
const int MAX = 100;

// Creating a global memoization table
unsigned long memTable[MAX];

long getResults(unsigned int input)	{
	/**
	  * This will be a recursive function and is used to calculate the values for the memoization table. If the table
	  *  already has the said value, this function will simply return that value, else, it will calculate the new value,
	  *  store it in the table and return the same.
	  *
	  * @param input: An integer value for which the result is to be calculated.
	  */

	// Since arrays are indexed from 0, thus, if the table has the result for `input`, it will be at index `input-1`.
	if (memTable[input-1] != 0)		// The elements of the table are initialized to 0, if the element is not 0, it has a value.
		return memTable[input-1];
	else if (input == 1)
		return 1;
	
	// Calculating the result and storing the same in a new variable.
	unsigned long answer = input*input;
	answer += getResults(input-1);		// The recursion part.

	// Storing this value in the table after a check.
	memTable[input-1] = (memTable[input-1] == 0)? answer : memTable[input-1];

	// Returning the result
	return answer;
}

int main()	{
	// Starting by initializing the memoization table.
	for (unsigned int i = 0; i < MAX; i++)
		memTable[i] = 0;
		
	// Declaring a variable to take input. This will be an unsigned integer and will be directly passed to the function.
	unsigned int input;
	std::cin>>input;
	while (true)	{
        if (input == 0)
            break;
		std::cout << getResults(input) << "\n";
		std::cin >> input;
	}
}
