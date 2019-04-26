/**
  * STATS:
  *		Runtime - 0.13
  *		Memory - 16 MB
  * 	Language - C++ 14
  */
  
/**
  *	There is a single positive integer T on the first line of input (equal to about 100000). 
  * It stands for the number of numbers to follow. 
  *	Then there are T lines, each containing exactly one positive integer number N, 1 <= N <= 1000000000.
  *
  * For each case 'T', print the number of trailing zeroes in T! [T factorial]
  */
  
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//A trick to make 'cin' and 'cout' run faster...
	ios_base::sync_with_stdio(false);
	/**
	  * Now, we've detached the connection between cin → scanf and cout → printf...
	  * This increases the execution speed of the program, as now, the compiler doesn't
	  * 	have to ensure that the buffer for both these streams are synchronized!
	  * However, by detaching the buffer we save time by not having to synchronize..
	  * But, by doing so, we'll be able to use either one of these functions and not both!
	  */
	
	
	//Variable declarations!
	unsigned long long input;
	
	unsigned long storage;
	unsigned long prod;
	
	unsigned int testCases;
	
	cin>>testCases;

	while (testCases-- > 0)	{
		cin>>input;
		
		prod = 0;
		storage = 1;
		
		unsigned int i = 0;
		
		while (input/storage > 0)	{
			i++;
			storage = pow(5, i);
			prod += input/storage;
		}
		
		cout<<prod<<endl;
	}
	
	return 0;
}