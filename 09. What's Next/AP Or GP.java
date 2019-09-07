/**
  * STATS:
  *		Runtime - 0.14
  *		Memory - 4468 MB
  *		Language - Java
  */
  
 /**
   * Given three successive members of a sequence, you need to determine the type of the progression and the next successive member...
   * Your program will be tested on one or more test cases. Each case is specified on a single line with three integers.
   * The last case is followed by a line with three zeros.
   *
   * For each test case, you program must print a single line of the form:
   * 	XX v
   * 		where XX is either AP or GP depending if the given progression is an Arithmetic or Geometric Progression. 
   * 		v is the next member of the given sequence. All input cases are guaranteed to be either an arithmetic or geometric progressions.
   */
   
import java.util.*;
import java.lang.*;

class Main	{
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scanner = new Scanner (System.in);
		long input[] = new long[3];
		
		while (true)	{
			//Taking input from screen...
			input[0] = scanner.nextInt();
			input[1] = scanner.nextInt();
			input[2] = scanner.nextInt();
			
			//The condition under which the loop should exit...
			if (input[0] == 0 && input[1] == 0 && input[2] == 0)
				break;
			
			if ((input[1] - input[0]) == (input[2] - input[1]))	{
				//The sequence is an Arithmetic Progression...
				System.out.println("AP " + (input[2] + (input[1] - input[0])));
			} else if (input[1]/input[0] == input[2] / input[1])	{
				//The equence is a Geometric Progression...
				System.out.println("GP " + (input[2] * (input[1]/input[0])));
			}
		}
	}
}