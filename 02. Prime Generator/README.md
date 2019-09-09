

# Prime Generator

### Problem Statement 
Given two numbers *'a'* and *'b'* find and print all the **prime numbers** between *'a'* and *'b'* (including both *'a'* and *'b'*).

The first line will contain a single integer *'N'* representing the number of test cases. The next *'N'* lines will each carry two space-separated integers, these are the integers *'a'* and *'b'*. Print every number *'P'* such that `a <= P <= b` and *'P'* is a Prime Number, print each such number one at a line. The output of two different test-cases should be separated by an empty line.
```
Constraints:
	Number of testcases: 1 to 10
	1 <= a, b <= 1_000_000_000
	a-b <= 100_000
```
<br>

> ***Prime Number*** -->> A number that is divisible by no other number except 1 and the number itself (excluding decimals).
> 
> [Link to the question on SPOJ](https://www.spoj.com/problems/PRIME1/)

## Example:
***Input***
<pre>
2
1	10
3	5
</pre>


***Output***
<pre>
2
3
5
7

3
5
</pre>

## Explanation
The input has 2 test-cases. In the first test case, all the prime numbers between *'1'* and *'10'* are to be printed. The prime numbers between *'1'* and *'10'* are `[2, 3, 5, 7]` . Thus the output has these numbers printed one number in a line. (*'1'* is considered as a special case and thus not a prime number)

Once the output for the first test case is finished, printing an empty line to signy the end of a test-case.

For the next test-case, all the prime-numbers between *'3'* and *'5'* are to be printed. Similarly the prime numbers present between *'3'* and *'5'* are `[3, 5]`. Print them similarly, one number in a line.