/**
  * STATS:
  *		Runtime - 2.14
  *		Memory - 55 MB
  * 	Language - Java (HotSpot 12)
  */

import java.util.*;
import java.lang.*;

class Solution	{
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		int test = scanner.nextInt();
		
		// Declaring integers and a boolean flag. These will be used in the loop below, decarled here
		//  as repeatedly deallocating and allocating the same variables will just waste time.
		long in01, in02;
		boolean prime;
		
		while (test-- > 0)	{
			// Getting input from the input stream.
			in01 = scanner.nextInt();
			in02 = scanner.nextInt();
			
			// Running a loop for every number between `in01` to `in02`.
			for (long i = in01; i <= in02; i++)	{
				// Inside this loop, simply need to check if `i` is prime, if so, print `i`.
				
				// No even number (except 2) can be prime number as they all have `2` as their factor too. Thus, skipping even numbers.
				if (i==1 || (i != 2 && i % 2 == 0))
					continue;
				
				// Creating a custom test case for i = 2.
				if (i == 2)	{
					System.out.println(i);
					continue;
				}
				
				// Initializing the boolean to true.
				prime = true;
				
				// Checking all odd numbers between `3` and `sqrt(i)` to see if any of them is a factor of `i` or not.
				for (long j = 3; j <= ((int) Math.sqrt(i)); j+=2)	{
					if (i % j == 0)	{
						// If `i` has any factor between `3` and `sqrt(i)`, then `i` is not a prime number. And so, marking the
						// flag as false and breaking out of the loop (since all that is required is whether `i` is prime or not).
						prime = false;
						break;
					}
				}
				
				// If the value of the flag is unchanged, then it means that `i` is a prime number. Thus, printing `i` to the screen.
				if (prime == true)
					System.out.println(i);
			}
			
			// Printing an empty line to signify the end of a test case.
			System.out.println();
		}
	}
}