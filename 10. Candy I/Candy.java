/**
  * STATS:
  *		Runtime - 0.27
  *		Memory - 48 MB
  *		Language - Java
  */

import java.util.*;
import java.lang.*;

class Main	{
	public static void main (String[] args) throws java.lang.Exception	{
		// Creating a scanner
		Scanner scanner = new Scanner(System.in);
		
		// Running an infinite loop
		while (true){
			// Taking input and checking for break condition
			int packetCount = scanner.nextInt();
			if (packetCount == -1)
				break;
			
			// Creating an arraylist to contain the number of candies in each packet. Also, calculating the total number of candies found.
			ArrayList<Integer> packets = new ArrayList<Integer>();
			long candyCount = 0;
			
			for (int i = 0; i < packetCount; i++) {
				// Taking the number of candies in a packet as the input and adding this to the arraylist and `candyCount`.
				int input = scanner.nextInt();
				packets.add(input);
				candyCount += input;
			}
			
			// The total number of candies are to be evenly divided among all packets. Thus, if the two numbers are not perfectly
			//	divisible, then the answer in such a case would not be possible.
			if ((float)candyCount/packetCount != ((int)candyCount/packetCount))	{
				// If the flow-of-control reaches this point, then an answer is not possible. So, printing -1 and moving to the 
				//  next iteration of the loop.
				System.out.println("-1");
				continue;
			}
			
			// If the program reaches this point, then an answer is possible. Declaring the rest of the elements that will 
			//  be required from this point.
			final long AVG = candyCount/packetCount;
			int moves = 0;				// To keep a track of the number of moves made.
			
			// Iterating through the array list and calculating the number of moves that will be required.
			for (int candies : packets) {
				if (candies < AVG)
					// If the number of candies in a packet is less than what is required, adding the candies to the packet.
					// Since the problem guarantees that a solution is possible. Simply calculating the number of moves required.
					moves += (AVG - candies);
			}
			
			System.out.println(moves);
		}
	}
}