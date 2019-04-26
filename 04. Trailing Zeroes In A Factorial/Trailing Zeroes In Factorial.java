/**
  * STATS:
  *		Runtime - 0.66
  *		Memory - 4468 MB
  * 	Language - Java
  */
  
/**
  *	There is a single positive integer T on the first line of input (equal to about 100000). 
  * It stands for the number of numbers to follow. 
  *	Then there are T lines, each containing exactly one positive integer number N, 1 <= N <= 1000000000.
  *
  * For each case 'T', print the number of trailing zeroes in T! [T factorial]
  */

import java.util.*;
import java.lang.*;

class Main	{
	public static void main (String[] args) throws java.lang.Exception	{
		Scanner scanner = new Scanner(System.in);
		
		long input;
		
		long storage;
		long prod;
		
		int testCases;
		
		testCases = scanner.nextInt();
	
		while (testCases-- > 0)	{
			input = scanner.nextInt();
			
			prod = 0;
			storage = 1;
			
			int i = 0;
			
			while (input/storage > 0)	{
				i++;
				storage = (long) Math.pow(5, i);
				prod += input/storage;
			}
			
			System.out.println(prod);
		}
	}
}