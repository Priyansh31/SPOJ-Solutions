/**
  * STATS:
  *		Runtime - 0.0
  *		Memory - 4.3 MB
  *		Language - C++ 14 (GCC 8.3)
  */
  
#include <iostream>

int main() {
	// Disconnecting printf-scanf functions from cout-cin. This is a speed hack and will improve the performance of cin-cout drastically in many scenarios.
	std::ios_base::sync_with_stdio(false);
	
	// Running an infinite loop. Will break the loop from inside.
	while (true)	{
		// Creating a variable and taking input.
		static int input;
		std::cin >> input;
		
		// Checking for the break scenario. If the number is 42, breaking out of the loop.
		if (input == 42)
			break;
			
		// If the number isn't 42, printing the number. Using linefeed to end the line instead of `endl`. The latter will flush the buffer and waste time.
		std::cout << input << "\n";
	}
	
	return 0;
}