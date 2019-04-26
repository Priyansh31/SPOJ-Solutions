/**
  * STATS:
  *		Runtime - 0.00
  *		Memory - 16 MB
  *		Language - C++ 14
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
   
#include <iostream>

using namespace std;

int main() {
	long input[3];
	
	while (true)	{
		//Taking input from screen...
		cin>>input[0]>>input[1]>>input[2];
		
		//The condition under which the loop should exit...
		if (input[0] == 0 && input[1] == 0 && input[2] == 0)
			break;
		
		if ((input[1] - input[0]) == (input[2] - input[1]))	{
			//The sequence is an Arithmetic Progression...
			cout<<"AP "<<(input[2] + (input[1] - input[0]))<<endl;
		} else if (input[1]/input[0] == input[2] / input[1])	{
			//The equence is a Geometric Progression...
			cout<<"GP "<<(input[2] * (input[1]/input[0]))<<endl;
		}
			
	}
	
	return 0;
}