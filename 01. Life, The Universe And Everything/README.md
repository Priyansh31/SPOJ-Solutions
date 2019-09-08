
# Life, The Universe, And Everything

### Problem Statement 
Rewrite numbers from the input to output. The input will contain varying lines. Each line will have one integer. 

For each line of input, read the integer and write it to the output (one integer on a line). Stop writing to the output after encountering the number 42 (i.e. 42 should not be written to the output).

> [Link to the question on SPOJ](https://www.spoj.com/problems/TEST/)

## Example:
***Input***
<pre>
1
2
88
42
99
</pre>


***Output***
<pre>
1
2
88
</pre>

## Explanation
The input stream had the integers [1, 2, 88, 42, 99]. Of these integers, the integers that are present before '42' are [1, 2, 88]. 

Thus, reading the input one line at a time, print the numbers [1, 2, 88] as the output with one integer on each line. As soon as '42' is given as input, stop processing input.