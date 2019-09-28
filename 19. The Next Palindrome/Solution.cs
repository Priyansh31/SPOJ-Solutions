/**
 * STATS:
 *      Runtime - 0.06
 *      Memory - 31 MB
 *      Language - C# (GMCS 5.20.1)
 */

using System;

public class Solution	{
    /// <summary>
    ///     This function will be used to increment a particular character in the given string by 1. If the character was originally '9', then after 
    ///     incrementing, it will be '0' and the character to the left of this character will be incremented by 1.
    /// </summary>
    /// <param name="input"> The string which contains the character that is to be incremented. </param>
    /// <param name="position"> The position of the character in the string which is to be incremented. </param>
    /// <returns> A string with the modifications made will be returned. </returns>
    /// <remarks>
    ///     This method will take a string consisting of numbers, and the position at which the increment should be made. It will make the increment
    ///     at that position and return the modified string back.
    /// </remarks>
	public static System.Text.StringBuilder addDigit(System.Text.StringBuilder input, int position)	{
        // Running an infinite loop.
        while (true)    {
            if (input[position] < '9')  {
                // If the number at `position` is less than 9, then incrementing it directly and breaking out of the loop.
                input[position] = (char) (input[position] + 1);
                break;
            } else if (position == 0 && input[position] == '9') {
                // If the first digit of the string is '9', then making this digit to 0 and then appending '1' to the start of the string.
                // Once this is done, breaking out of the loop.
                input[position] = '0';
                input = new System.Text.StringBuilder("1").Append(input);
                break;
            }

            // If neither of the above test-cases are satisfied, then the number is '9' and is not present at the beginning of the string.
            // Converting this number to '0' and decrementing `position`, so that in the next iteration of the loop, `position-1` will be incremented
            // by 1.
            input[position--] = '0';
        }

        // When the flow-of-control reaches this point, the string would be incremented by 1 where required. So, directly returning the string back.
        return input;
	}
	
	public static void Main()	{
		uint testCases = Convert.ToUInt32(Console.ReadLine());
		
		while (testCases-- > 0)	{
			// Taking the number as an input in the form of a string builder. Using a string builder as the string as stupidly immutable here :(
			System.Text.StringBuilder input = new System.Text.StringBuilder(Console.ReadLine());
			
			// Checking if the input is a single digit number less than 9. If so, incrementing it and printing it.
			if (input.Length == 1 && input[0] < '9')	{
				// The first character is (implicitly) converted to an integer, incremented and then type-case into a character and printed.
				Console.WriteLine((char) (input[0] + 1));
				continue;		// Jumping to the next test-case to prevent any further execution once the result is printed.
			}

			// If the flow of control reaches this part, then the string contains more than one digit. Thus, now iterating over the length of the string
            // to make the string a palindrome.

            // Declaring a label for a goto statement. Beware, goto statements are generally discouraged and considered as a bad programming pratice. They 
            // shouldn't be used unless you know what you're doing.
            top:

            // Using a variable to store the number of changes made to the number to make it a palindrome.
            uint changes_made = 0;         // Integer will suffice for C#, can go upto 4.2B

            for (int i = 0, j = input.Length-1; i < j; i++, j--)  {
                // Using unsinged integer for `i` and `j` as the length of string can be upto 10E6, unsigned integer will be enough to contain it.
                // Inside this loop, simply checking if the characters at the i-th position and the j-th position are the same, if not, changing the character
                // at the j-th position to match the character at the i-th position.
                if (input[i] != input[j])   {
                    // If the flow-of-control enters this block, then changes will be made to the string. Thus, incrementing the counter.
                    changes_made++;
                    
                    // If the two character are not equal, storing the character at the j-th position in a separate variable and setting j-th position
                    // to contain the same number as the i-th position.

                    char temp = input[j];
                    input[j] = input[i];

                    // If the j-th number was decreased to match the i-th number, i.e. the value at `j` was decreased, then incremeting the value at `j-1` by 1.
                    // Without this, the palindrome will be smaller than the original number supplied. And thus, would be the wrong answer.
                    if (input[j] < temp)    {
                        input = addDigit(input, j-1);

                        // Setting this testcase up to be checked again in the next iteration of the loop.
                        i--;
                        j++;
                    }
                }
            }

            // If no changes have been made till this point, then that means that the given number is a palindrome by default. Thus, adding 1 to the number
            // and finding the next smallest palindrome for this.
            if (changes_made == 0)  {
                input = addDigit(input, input.Length-1);
                goto top;
            }
			
			Console.WriteLine(input);
		}
	}
}