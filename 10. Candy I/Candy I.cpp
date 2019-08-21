/**
  * STATS:
  *		Runtime - 0.00
  *		Memory - 4.4 MB
  *		Language - C++ 14
  */


# include <iostream>
# include <vector>
# include <math.h>

int main() {
	while (true)	{
		// Taking the number as input. Cannot be unsigned as -1 will be given as an input to break the loop.
		int packetCount;
		std::cin >> packetCount;
		
		// Checking if the loop is to be broken or not.
		if (packetCount < 0)
			break;
			
		// Creating a vector that will contain the number of candies and another 
		//  variable to keep a count of total number of candies.
		std::vector<int> candies;
		unsigned long candyCount = 0;
		
		for (unsigned int i = 0; i < packetCount; i++)	{
			// Taking the number of candies in the current packet as an input and 
			//  adding this to the vector.
			
			unsigned int candy;
			std::cin >> candy;
			candies.push_back(candy);
			candyCount += candy;
		}
		
		// The total number of candies are to be evenly divided among all the packetCount.
		// Thus, if the two numbers are not perfectly divisible, the answer would be wrong.
		// Using the `floor` function which rounds-off a fraction to the nearest bigger integer
		//  and the `ceil` function which rounds-off a fraction to the nearest smaller integer.
		//  If the value does not contain any decimals, then both would be the same values.
		if (floor(float(candyCount/packetCount)) != ceil(float(candyCount/packetCount)))	{
			// If the flow-of-control reaches this point, the answer is not possible.
			// So, we print -1 and move to the next iteration of the loop.
			std::cout << "-1\n";
			continue;
		}
		
		// If the flow-of-control reaches this point, then a solution is possible.
		// Thus, we start by calculating number of candies that should be present 
		//  inside each packet once they are evenly divided.
		unsigned int average = candyCount/packetCount;
		
		// Next, we loop through each element of the vector till we reach the desired
		//  solution and keep counting the number of moves made. Before, that declaring 
		//  all the variables that are required.
		unsigned int moves = 0;
		
		// Creating a variable to keep a track on the number of extra candies that we have. Can be negative.
		int extraCandies = 0;
		
		// Looping through all elements of the vector. Should be finished within a single iteration of the loop.
		for (unsigned int i = 0; i < packetCount; i++)	{
			if (candies.at(i) > average)	{
				// If the number of candies is greater than the required, we take the remaining as extras.
				extraCandies += (candies.at(i) - average);
				candies.at(i) = average;
				
				// Any number of candies above `average` will be taken as extra. Moves 
				//  shall be counted only when adding the candies to a packet.
			} else if (candies.at(i) < average)	{
				// If the number of candies is less than required, we add some from the extra candies.
				extraCandies -= (average - candies.at(i));
				
				// Since a single candy can be moved in one `move`, thus adding as many moves as the number
				//  of candies that are to be moved.
				moves += (average-candies.at(i));
				candies.at(i) = average;
				
				// Any number of candies required to take the number of candies to `average` will be 
				//  taken from `extraCandies` and added here.
			}
		}
	
		(extraCandies == 0)? std::cout << moves << "\n" : std::cout << "-1\n";
	}
	
	return 0;
}