# Reversed Addition

### Problem Statement

A number 'N' is given indicating the number of testcases to be followed.
The following N lines, will have two numbers on each line. These numbers are separated by space. Calculate the sum of these numbers found by reversing these numbers individually, adding them and then reversing the sum once again.

For each line of input, print the result, one result in each line.
The answer is to be devoid of all leading zeroes.
	Leading Zeroes → The zeroes that are placed before any number. The initial "000" are the traling zeroes in "00012300" will the leading zeroes.

> [Link to question on SPOJ](https://www.spoj.com/problems/ADDREV/)
		
## Example
***Input***
<pre>
2
24		  1
305		794
</pre>


***Output***
<pre>
34
1
</pre>
		
## Explanation
The first line contains two numbers '24' and '1'. The reverse of these numbers is '42' and '1'. Adding these two numbers gives '43'... The reverse of this number is '34'. Since the output is devoid of leading zeroes, print the answer as '34'.
 
The next line contains two numbers '305' and '794'. The reverse of these numbers is '503' and '497'. Adding these two numbers gives '1000'... The reverse of this number is '0001', thus, the output should be '1'.
