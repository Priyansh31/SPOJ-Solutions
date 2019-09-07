
# Explanation

### How to solve

This is one of the relatively easier problems that are good for beginners. All you have to do in this problem is to get the input in the specified format. Once you get the two numbers that are to be added, reverse those two numbers individually. Then, add them and reverse their sum again. This will be your result, print it, one result in a line. And just apply a loop to the entire procedure.

Depending on the language that you decide to go with, getting the input can be relatively easy or hard. C++ and Java have it pretty easy, you can get the input normally without having to do anything else.

With Python and C#, the problem is that neither of those languages allow you to get input with a custom delimiter. Both these langauges allow getting the input one character at a time, or an entire line at a time. Thus, in both these langauges, the input has to be taken, one line at a time, then this line has to be split into two strings and then these strings are to be converted into and used as integers.

### Statistics
 - **C++**
 <pre>
	Runtime - 0.00
   	Memory - 15 MB
 </pre>
 
 - **Java**
 <pre>
	Runtime - 0.44
	Memory - 4468 MB
 </pre>
 
 - **Python-01**
 <pre>
	Runtime - 0.07
	Memory - 9.2 MB
 </pre>
 
 - **Python-02**
 <pre>
	Runtime - 0.10
	Memory - 9.2 MB
 </pre>
 
 - **C#**
 <pre>
	Runtime - 0.07
	Memory - 18 MB
 </pre>

# Interesting Observation:

This problem has two separate solutions in Python. Both these solutions are working normally. However, *`Solution-01.py`* uses the built-in methods in Python to do all the hardwork. The working of this solution is:
 - The input is read one line at a time, then split into two strings.
 - These strings are then reversed using splicing, then *converted* into integer and added to form an integer result.
 - This integer result in again *converted* into a string and then reversed using splicing.
 - However, this final result **can have zeroes on the left**, for example, if the sum of two integers is '1000', converting this into a string and reversing it will be '0001' as a string. In order to remove zeros on the left, using *`lstrip()`* method.
 
As for *`Solution-02.py`*, this file does not rely so heavily on type-casting as the previous one. The working of this solution is:
 - The input is read one line at a time, then split into two integers.
 - These integers are then reversed directly, one digit at a time using a custom-defined function.
 - These reversed integers are then added and thir sum is again reversed using the same function.
 - Since integers are being reversed, there is no need to check for any zeroes as they will be implicitly discarded.
 
 ### The Anomaly
It is a commonly believed notion that in all programming languages, converting one data type into another is very expensive in terms of time and space. Thus, it is believed that casting objets of one type to another should be avoided as far as possible. However, in this example, *`Solution-01.py`* relies quite heavily on type-casting between strings and integers. To print a single line of result, type-casting performed **twice**. On the other hand, `Solution-02.py` does not rely so much on type-casting. To print each line of input, type-casting is performed **once** (while getting the input and splitting it into two integers).

Despite the fact that *`Solution02.py`* uses type-casting half as many times as *`Solution-01.py`*, in terms of pure performance, the second solution uses the ***same*** amount of memory as the first solution. In terms of execution time, the second solution turns out to be ***slower*** than the first solution.

### Conclusion
Thus, in short, despite relying heavily on type-casting, *`Solution-01.py`* is ***faster*** than its counterpart *`Solution-02.py`* that uses type-casting half as many times, and they ***both use the same amount of memory*** to execute.

Although this data is not sufficient to say anything conclusive, it certainly does prove that type-casting can be more efficient and easier to implement if used correctly.