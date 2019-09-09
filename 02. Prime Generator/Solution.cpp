/**
  * STATS:
  *		Runtime - 1.48
  *		Memory - 4.4 MB
  * 	Language - C++ 14 (GCC 8.3)
  */

#include <iostream>
#include <math.h>

int main()	{
	
	// Disconnecting `cin-cout` with `scanf-printf`. This will greatly improve 
	// performance while reading with `cin-cout`. But using `cin-cout` with `scanf-printf`
	// in the same program can lead to problems.
	std::ios_base::sync_with_stdio(false);

	unsigned int testCases;
	std::cin >> testCases;

	while (testCases--)	{
		// Declaring the following variables as static, they will be required for each test case.
		// Repeatedly assigning them space on every iteration of loop will only waste time.
		static unsigned long a;
		static unsigned long b;
		
		// Declaring a static flag variable that will be used to know if any number is a divisor of `i` or not.
		static bool flag;
		
		// Taking the values from input stream. Given how the numbers are supplied, `b` > `a`.
		std::cin >> a >> b;

		// Iterating through each and every number between `a` and `b`.
		for (unsigned long i = a; i <= b; i++)	{
			// Inside here, check if `i` is a prime number or not. If `i` is a prime number,
			// printing `i` to the screen.
			
			// Performing an efficiency check. If `i` is 1 or if `i` is an even number greater than 2
			// simply moving to the next iteration of the loop.
			if (i == 1 || (i % 2 == 0) && (i > 2))
				continue;

			// Checking for the scenario if `i` is 2, if so, printing the same and moving to the next iteration.
			if (i == 2)	{
				std::cout << i << "\n";
				continue;
			}
			
			// Resetting the value of flag...
			flag = false;

			// If the flow of control reaches this part, bruteforcing the solution... If `i` was an even number, it'll 
			// be skipped by the efficiency check above. Since `i` isn't even, thus, no even number can be a factor 
			// of `i`. So, starting with 3, checking if any odd number is a factor of `i` or not.
			for (unsigned long j = 3; j <= sqrt(i); j += 2)	{
				if (i % j == 0)	{
					// If any factor of `i` is found between 3 and sqrt(i), it would mean `i` is not a prime number.
					// Thus, skipping the rest of this loop and breaking out after setting the value of flag to indicate
					// that `i` is a composite number.
					flag = true;
					break;
				}
			}

			// If the value of `flag` is true it means `i` is not a prime number.
			if (flag != true)
				// `endl` flushes the buffer and thus will lead to extra resource usage that isn't required.
				std::cout << i << "\n";
		}
		
		// Printing an empty line once the test case ends.
		std::cout << "\n";
	}

	return 0;
}
