/**
  * STATS:
  *		Runtime - 2.10
  *		Memory - 18 MB
  *		Langauge - C# (GCMS 5.20.1)
  */

using System;

public class Test	{
	public static void Main()	{
		// Getting the number of test cases from input stream. Using an unsingned integer for the same.
		uint testCase = Convert.ToUInt32(Console.ReadLine());
		
		// Running a loop for each test case.
		while (testCase-- > 0)	{
			// Since the numbers are space separated, taking a line as input and then splitting to form array.
			string[] input = Console.ReadLine().Split(' ', 2);
			
			// Adding values to these variables. Given how these variables are put in the stream, `b` > `a`.
			ulong a = Convert.ToUInt64(input[0]);
			ulong b = Convert.ToUInt64(input[1]);
			
			// Iterating through each number between `a` and `b` to check if that number is prime or not.
			for (ulong i = a; i <= b; i++)	{
				// Inside the loop, simply need to check if `i` is a prime number. If so, printing `i` to the output.
				
				// Starting with an efficiency check. If `i` is 1, or is a factor of 2 and greater than two, skipping to the next element as no even number apart from 2 is a prime number.
				if (i == 1 || (i % 2 == 0) && (i > 2))
					continue;
				
				// If `i` is 2, printing the value and moving to the next iteration.
				if (i == 2)	{
					Console.WriteLine(i);
					continue;
				}
				
				// Declaring a flag that will be used to check if `i` has a factor or not.
				bool flag = false;
				
				// Beginning by bruteforcing. Checking for every number between 0 and sqrt(i) to see if it is a factor of `i`.
				// Since `i` won't be an even number, thus no need to check with even numbers.
				for (ulong j = 3; j <= Math.Sqrt(i); j+=2)	{
					// Resetting the value of the flag.
					flag = false;
					
					if (i % j == 0)	{
						// If `j` is a factor of `i`, then `i` is no longer a prime number. Thus, no need to check if the remaining numbers are factors or not.
						// Simply breaking out of this loop.
						flag = true;
						break;
					}
				}
				
				// Since the value of `flag` was reset to `false`. If it is the same, then `i` has no factors and thus is a prime number.
				if (flag == false)
					Console.WriteLine(i);
			}
			
			// Printing an empty line to indicate the end of a test-case.
			Console.WriteLine();
		}
	}
}