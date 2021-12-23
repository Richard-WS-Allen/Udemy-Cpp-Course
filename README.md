# Udemy-Cpp-Course
A repo consisting of projects developed throughout the Udemy Beginning C++ Programming From Beginner to Beyond course.
Using as a refresher of beginning topics and diving deeper into programming with C++ before I move on to more challenging topics.

[Link to course](https://www.udemy.com/share/101Wd4AEYdcVlSR3kH/)

## First Three Sections:

In the first three sections, I downloaded the mingw compiler, set it in my PATH variables, set up a new IDE I have not used before (CodeLite), and configured the compiler. I also added the first workspace within CodeLite and established a user template to use for new projects. Lastly, I used Notepad to write a cpp program and compiled it using the command line.

## Section Four:

In this section, we were to write another simple program. This time to prompt the user for their favorite number and print:
"Amazing! That's my favorite number too!"
"No really, *user number* is my favorite number!:

## Section Five:

Section five was just an overview of the structure of C++ programs including: how the compiler sees comments, preprocessor directives, the main() function, namespaces, and basic I/O.

## Section Six:

Section six went over constants and other variables. This included using sizeof to see bytes used by different types and min and max, to see the minimum and maximum values of some of the basic types. I found it interesting on my Windows machine the sizeof, min, and max were the same for int and long. However, on my Linux machine, long and long long were the same. There was also a challenge to make a carpet cleaning service calculator using user input (number of small and large rooms) and output of price (subtotal and total with tax). I also took some time to do the setup steps for my new Linux machine before continuing to the next sections.

## Section Seven:

Section Seven was all about arrays and vectors, including the benefits and drawbacks of each, initializing them, and multidimensional arrays(vectors).


## Section Eight, Nine, and Ten:

I took a break from working through this course after completing these sections and partially through section 11. These were completed about 6 months before finally merging. I'm a little hazy on the details from these, but can see that in the course tree it covered control structures (if/else statements and loops), and working with strings in C++. This was mostly straightforward, from what I remember. But going back over the details of these subjects can always be helpful. I know I've had bugs pop up in my code that were hard to find, and it was something simple (one example was when I added a line of code to what I thought was the if branch, but didn't use braces when I first wrote that if branch because it was only one line, a simple fix, but sometimes hard to discover).

## Section Eleven:

This section is a little more fresh, although half of it was completed months ago. The second half was really helpful for a lot of forgotten details about C++ functions. This course also did a great job of going over recursion and the stack, and when recursion can be useful and when to stay away from it, for potential stack overflow. I remember during my undergrad, stack overflow got me on one of my final projects, in recursively destroying a binary search tree. I really enjoyed working through the second half of this section, going back over the little details that are easy to forget was very helpful.

## Section Twelve:

This section was all about pointers and references. I really enjoyed this section, it went over a lot of information that I really should have paid more attention to during my data structures and algorithms course in college. Going back over all this information really provided good insight into using pointers and references appropiately, when they're useful, the potential pitfalls, how to avoid making mistakes with them, and how to find these mistakes when you do make them. The point I really found useful was working with dynamically allocating memory on the heap, the videos did a great job of explaining how this was accomplished with pointers, what is actually taking place behind the scenes, and why memory leaks can happen and how to avoid them. This indirectly helped me better understand a HackerRank problem in C++, that required working with multidimensional arrays of varying sizes. I believe I ended up looking up a solution to avoid using vectors, since the problem specifically asked to use arrays. Of course the solution used pointers, which makes a lot more sense to me now. This section's challenge was also working with arrays, and rather than using one array for the solution I decided to go with a multidimensional arary, like from the HackerRank solution, since I have a much better grasp on this topic now. Although, there is still a lot to learn and mistakes to be made!
