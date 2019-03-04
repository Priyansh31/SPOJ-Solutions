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

#include <iostream>
using namespace std;

unsigned long reverse(unsigned long in)	{
	unsigned long answer = 0;
	while (in > 0)	{
			answer += (in % 10);
		answer *= 10;
		in = in/10;
	}

	return answer;
}

int main() {
	//A hack to further increase the speed of execution of 'cout' and 'cin'...
	ios_base::sync_with_stdio(false);

	//Creating two variables to take input...
	unsigned int testCases;
	cin>>testCases;

	while (testCases-- > 0)	{
		unsigned long x, y;
		cin>>x>>y;

		x = reverse(x);
		y = reverse(y);

		unsigned long ans = reverse(x+y);

		//Now, to remove the trailing zeroes from the end...
		while (ans % 10 == 0)
			ans /= 10;

		cout<<ans<<endl;
	}

	cin>>testCases;

	return 0;
}
