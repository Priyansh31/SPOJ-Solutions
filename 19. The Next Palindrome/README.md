

# The Next Palindrome

### Problem Statement 
A number is given. Find the number that is this numbers immediate next palindrome.

The first line will contain a single integer *'K'* representing the number of test cases. The next *'K'* lines will each carry a number. Find the immediate next palindromic number and print it, with one number on a line.
```
Constraints:
    1 <= input_number <= 10^10E6     (Can be any positive number up to a million digits)
    The input number won't have any leading zeroes.
```
<br>

> ***Palindrome*** -->> (In here) A number that is exactly the same when read from left-to-right or from right-to-left.
> Examples: 101, 999, 333, 717
> 
> [Link to the question on SPOJ](https://www.spoj.com/problems/PALIN/)

## Example:
***Input***
<pre>
3
808
2133
999
</pre>


***Output***
<pre>
818
2222
1001
</pre>

## Explanation
The input has 3 test-cases. The first two are normal test cases. A number is given, simply find the next number that is a palindrome and is greater than this number.

In the third case, '999' is a palindrome by itself. However, as per the question, the program is supposed to find the next smallest number that happens to be a palindrome (regardless of whether the input is a palindrome by itself or not). Thus, the output for this will be the first number after '999' that also happens to be a palindrome (which is '1001').