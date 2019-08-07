/**
  * STATS:
  *		Runtime - 0.10
  *		Memory - 4468 MB
  * 	Language - Java
  */
  
/**
  * The input begins with an integer T (1 <= T <= 100)
  * This is followed by T lines, each line having one integer N.
  *
  *	For each one of the T lines, print N!
  */
  
import java.util.*;
import java.lang.*;
import java.math.BigInteger;

class Main	{
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		//Variable declarations!
		short remainder;
		int input;
		int cpy;
		
		int testCases = scanner.nextInt();
		while (testCases-- > 0)	{

            input = scanner.nextInt();
			BigInteger prod = BigInteger.ONE;
		
			//The main loop to calculate the factorials!
			while (input > 1)
				prod = prod.multiply(BigInteger.valueOf(input--));
		
			System.out.println(prod);
		}
	}
}