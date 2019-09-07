/**
  * STATS:
  *     Runtime - 0.00
  *     Memory - 15 MB
  *     Language - C++ 14
  */

#include <iostream>

unsigned long reverse(unsigned long in)	{
	/**
	  * A function that will take an integer (long) as the input, will reverse it and return the reversed
	  *	 value as the output.
	  */
	
	// Creating a variable to store the reversed value and initializing it.
	unsigned long answer = 0;
	
	while (in > 0)	{
		answer += (in % 10);
		answer *= 10;
		in = in/10;
	}

	return answer;
}

int main() {
	// A hack to further increase the speed of execution of 'cout' and 'cin'...
	// This statement will detach the connection between the cout-cin and scanf-printf. Basically,
	//  after using the following statement, do not use cout-cin and printf-scanf in the same program.
	std::ios_base::sync_with_stdio(false);

	// Taking in the number of loops required.
	unsigned int testCases;
	std::cin >> testCases;

	while (testCases--)	{
		unsigned long x, y;
		std::cin >> x >> y;

		x = reverse(x);
		y = reverse(y);

		unsigned long ans = reverse(x+y);

		//Now, to remove the trailing zeroes from the end...
		while (ans % 10 == 0)
			ans /= 10;

		// Using `endl` causes the buffer stream to be flushed. This is not required for this program, thus, using the linefeed
		//  character to avoid wasting time in flusing the buffer needlessly.
		std::cout << ans <<"\n";
	}

	return 0;
}
