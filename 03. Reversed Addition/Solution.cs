/**
  * STATS:
  * 	Runtime - 0.07
  *		Memory - 18 MB
  *		Langauge - C#
  */

using System;

public class Test	{
	
	///	<summary>
	///		This method will be used to reverse a number and return the reversed number back to the calling method.
	/// </summary>
	/// <param name="input">The integer that is to be reversed and returned</param>		
	public static int Reverse(int input)	{
		// Creating a new variable to store the reverse of `input`.
		int result = 0;
	
		while (input > 0)	{
			result *= 10;
			
			// Taking the last digit from `input` and adding it to `result`
			result += input % 10;
			
			input/= 10;
		}
		
		// By now, the value inside `result` will be the reverse of `input`. Returning the same.
		return result;
	}
	
	public static void Main()	{
		// Getting the number of testcases from input
		int testCases = Convert.ToInt32(Console.ReadLine());

		while (testCases-- > 0)	{
			// Getting the next two integers from the console. Taking an entire line as the input
			//  and splitting the line based upon space into two arrays and storing these arrays.
			string[] input = Console.ReadLine().Split(' ', 2);
			
			// Now, taking the two arrays and converting them into integers.
			int input01 = Convert.ToInt32(input[0]);
			int input02 = Convert.ToInt32(input[1]);
			
			// Getting the reverse of these two numbers and overwriting their original values.
			input01 = Reverse(input01);
			input02 = Reverse(input02);
			
			// Adding the reversed numbers, reversing their sum and printing the same.
			Console.WriteLine(Reverse(input01 + input02));
		}
	}
}