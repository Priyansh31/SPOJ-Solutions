/**
  * STATS:
  *     Runtime - 0.00
  *     Memory - 15 MB
  *     Language - C++ 14
  *
  *     Runtime - 0.44
  *     Memory - 4468 MB
  *     Language - Java
  */

/**
  * The input consists of N cases (equal to about 10000). The first line of the input contains only positive integer N.
  * Then follow the cases. Each case consists of exactly one line with two positive integers separated by space.
  * Note that the reversed number never has any trailing zeros.
  *
  * For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers.
  * Omit any leading zeros in the output.
  */
  
import java.util.*;
import java.lang.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		//The first integer will signify the number of test cases...
		int testCases = scanner.nextInt();
		
		while (testCases-- > 0)	{
			//The next two space-separated integers are the integers which are to be reversed and then added.
			long answer = reverse(reverse(scanner.nextInt()) + reverse(scanner.nextInt()));
			
			while (answer % 10 == 0)
				answer = answer / 10;
			System.out.println(answer);
		}
	}
	
	public static long reverse(long in)	{
		long answer = 0;
		while (in > 0)	{
			answer += (in % 10);
			answer *= 10;
			in /= 10;
		}
		
		return answer;
	}
}