/**
  * STATS:
  *     Runtime - 0.44
  *     Memory - 4468 MB
  *     Language - Java
  */
  
import java.util.*;
import java.lang.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		//The first integer will signify the number of test cases...
		int testCases = scanner.nextInt();
		
		while (testCases-- > 0)	{
			//The next two space-separated integers are the integers which are to be reversed and then added and then reversed again.
			System.out.println(reverse(reverse(scanner.nextInt()) + reverse(scanner.nextInt())));
		}
	}
	
	public static long reverse(long in)	{
		/**
		  * This method will take a number as the input and return the reverse of that number as the output.
		  */
		
		// Creating a variable to store the result and inititalzing the variable.
		long answer = 0;
		
		while (in > 0)	{
			answer *= 10;
			
			answer += (in % 10);
			in /= 10;
		}
		
		// By now `answer` will contain the reverse of `in`. Returning the same.
		return answer;
	}
}