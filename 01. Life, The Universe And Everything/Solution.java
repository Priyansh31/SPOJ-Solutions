/**
  * STATS:
  *		Runtime - 0.08
  *		Memory - 35 MB
  *		Language - Java (HotSpot 12)
  */

import java.util.*;
import java.lang.*;

class Solution {
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
 
		// Creating an infinite loop
		while (true)	{
			// Taking theinput using scanner.
			int input = scanner.nextInt();
 
			// Checking the break case, if the number is 42, breaking the infinite loop
			if (input == 42)
				break;
 
			// The flow-of-control will reach this point only if the input is not 42. So, simply printing the number.
			System.out.println(input);
		}
	}
}