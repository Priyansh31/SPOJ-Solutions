/**
  * STATS:
  * 	Runtime - 0.02
  *		Memory - 16 MB
  *		Language - C# (GMCS 5.20.1)
  */

using System;

public class Solution {
	public static void Main() {
		// Running an infinite loop
		while (true)	{
			// Taking input from the console as a line, and converting it into integer
			int input = Convert.ToInt32(Console.ReadLine());
			
			// Checking, if the number is 42, breaking out of the infinite loop.
			if (input == 42)
				break;
			
			// If the number isn't 42, printing the number to the console.
			Console.WriteLine(input);
		}
	}
}