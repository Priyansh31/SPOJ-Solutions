/**
  * STATS:
  *		Runtime - 0.66
  *		Memory - 16 MB
  * 	Language - C++ 14
  */

/**
  * The input begins with the number t of test cases in a single line (t<=10). 
  * In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.
  * 
  * For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.
  */

#include <iostream>
#include <math.h>

using namespace std;

int main()	{
	ios_base::sync_with_stdio(false);

	int inputs;
	cin>>inputs;

	//Declaring these as static as they will be required throughout the program.
	static int begin, end;
	static bool flag;

	while ((inputs--) > 0)	{
		//The main loop... Will accept inputs for the primary and secondary values...

		cin>>begin>>end;

		for (int i = begin; i <= end; i++)	{
			/**
			  * This loop will traverse through the numbers and take `i` as one number,
			  * then, we have to check whether `i` is prime or not...
			  * If it is, we'll print out the number, else, continue.
			  */

			  if (i == 1 || ((i % 2 == 0) && (i > 2)))
                continue;

			  //Resetting the value of flag...
			  flag = false;

			  //As any even number cannot be a prime, we'll skip the even numbers...
			  for (int j = 3; j <= sqrt(i); j += 2)	{
			  	if (i % j == 0)	{
			  		flag = true;
			  		break;
			  	}
			  }

			  if (flag != true)
                cout<<i<<endl;
		}
		cout<<endl;
	}

	return 0;
}
