#include <iostream>

int calcResult(long val, int reps)	{
	/**
	 * This will be a recursive function that is used to calculate the final result.
	 * This function will basically calculate {(val^reps)%10} and return the answer.
	 */

	// Check to prevent an infinite loop...
	if (reps == 0)
		return 1;	// Nothing other than 1 should be returned here.
	
	// Performing the recursion and returning the answer as soon as its calculated.
	return (val * calcResult(val, --reps) % 10);
}


int main() {
	 // Since it isn't specified that number of testcases won't be negative, thus not taking unsigned var.
	 int testCases;
	 std::cin >> testCases;
	 
	 while (testCases--)	{
	 	// Looping through each testcase and printing the result for the test case at the same time.
	 	
		// Given that `a` and `b` will be greater than 0...
		unsigned long a;
		unsigned long b;
		std::cin >> a >> b;
		
		// Declaring `a` as long as it will be required later on...
		// Also, its assured that `a` and `b` will not be 0 [at once - be careful]
		
		if (b == 0)	{
			std::cout << "1\n";		// Anything raised to 0 is 1 :)
			continue;
		}
		
		// Getting the last digit of `a`
		unsigned int lastDigitA = a % 10;
		
		// Performing a few efficiency checks...
		// In case the last digit of `a` is a specific number, the answer can be 
		//  printed directly without any calculations required.
	 	switch(lastDigitA)	{
	 		// Using a nifty little trick to save myself a few lines of code ;)
	 		// Feel free to steal ;p
	 		
	 		case 0:
	 		case 1:
	 		case 5:
	 			// If the last digit of any number is 0, then that number raised 
	 			//  to anything will always have its last digit as the number, i.e. 0, 
	 			//  the same argument can be made for last digit being 1 or 5.
	 			std::cout << lastDigitA << "\n";
	 			continue;
	 			break;		// Whether `break` is required here or not will vary between compilers...
	 	}
	 	
	 	// If the last digit didn't fit any of the above cases, then manually 
	 	//  calculating the answer here.
	 	unsigned int power = b % 4;
	 	
	 	
	 	// For a detailed explanation for the above command, go through the problem
	 	//	explanation.
	 	
	 	if (power == 0)
	 		power = 4;
	 		
	 	// Calculating the power and printing the answer. Don't use `math.pow()` instead of this function.
	 	std::cout << calcResult(a, power) << "\n";
	 }
	
	
	return 0;
}