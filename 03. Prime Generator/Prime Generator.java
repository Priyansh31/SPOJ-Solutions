/**
  * STATS:
  *		Runtime - 3.16
  *		Memory - 4468 MB
  * 	Language - Java
  */

/**
  * The input begins with the number t of test cases in a single line (t<=10). 
  * In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.
  * 
  * For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.
  */

import java.util.*;
import java.lang.*;

class Main	{
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		int test = scanner.nextInt();
		
		long in01, in02;
		boolean prime;
		
		while (test-- > 0)	{
			in01 = scanner.nextInt();
			in02 = scanner.nextInt();
			
			for (long i = in01; i <= in02; i++)	{
				//We'll be skipping the even numbers as well as numbers smaller than 2 as none of them can be primes.
				if (i < 2 || i % 2 == 0)
					continue;
				
				//We'll also assume the number 'i' to be a prime (for the time being)...
				prime = true;
				
				for (long j = 2; j < ((int) Math.sqrt(i)); j++)	{
					if (i % j == 0)	{
						prime = false;
						break;
					}
				}
				
				if (prime == true)
					System.out.println(i);
			}
			
			System.out.println();
		}
	}
}