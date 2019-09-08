
# Solution Explanation

  

### How to solve

  

These are the steps that are to be done to obtain the solution:

  

- Read one line of input. The input will be an integer.

- Check if the input number is 42.

- If the number is 42, exit from the program.

- If the number isn't 42, print the number, one number on each line.

  

Each of these steps will be performed for every line of input. The problem that many people face was taking input.

  

Some were trying to store the input numbers in an array and thus were unable to decide the size of the array, others were having trouble deciding how long the loop should be since the number of lines that are to be taken is not given.

  

Here is a possible solution;

-   Code the above-mentioned steps.
-   Place the code in an infinite loop.
-   If the input number is '42', break out of the loop.

This is the approach that I followed. And obviously, there can be many other approaches to solve the same problem.

  

> Tip: Almost every language has dynamic arrays, i.e. arrays that do not have a fixed size. You can keep inserting as many elements into them. Generally, these are known as 'lists'. Nearly every language has an implementation of lists. C++ has *`vector`*, both, Java and C# have *`ArrayList`* and *`List`* (note only their names are the same, this does not mean that a Java list will work in C#). Lists are pretty handy in some scenarios and can be used in scenarios **similar to** this problem where no information is available as to how many elements are present.
>
> Also, Python has no in-built support for arrays. It simply has *`list`* which is to be used in place of arrays.
> 
> P.S. This problem ***does not require*** lists or vectors to be solved. It is ***not required to store the input*** numbers at all. Thus, using arrays or lists for this problem will be a waste of resources.

  

### Statistics

- **C++ (GCC 8.3)**

<pre>

Runtime - 0.00

Memory - 4.3 MB

</pre>

- **Java (HotSpot 12)**

<pre>

Runtime - 0.08

Memory - 35 MB

</pre>

- **Python (3.7.3)**

<pre>

Runtime - 0.02

Memory - 9.2 MB

</pre>

- **C# (GCMS 5.20.1)**

<pre>

Runtime - 0.02

Memory - 16 MB

</pre>

  

## Additional Resources

Some resources that might be interesting to read.<br>

[C++ Arrays Vs Vectors](https://stackoverflow.com/a/15079462)

[C# ArrayList vs List in](https://stackoverflow.com/questions/2309694/arraylist-vs-list-in-c-sharp)

[Java ArrayList vs List](https://stackoverflow.com/questions/14903145/what-is-the-difference-between-list-and-arraylist)

[Python When To Use List Vs Arrays](https://stackoverflow.com/a/176589)