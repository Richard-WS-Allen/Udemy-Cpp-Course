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

I took a break from working through this course, as I was starting a new position. Sections eight, nine and ten were completed prior to taking a break. These were completed about 6 months before finally merging, so I'm a little hazy on the details of what these covered, but can see that in the course tree it covered control structures (if/else statements and loops), and working with strings in C++. This was mostly straightforward, from what I remember. But going back over the details of these subjects can always be helpful. I know I've had bugs pop up in my code that were hard to find, and it was something simple, such as not including braces for an if statement, and later adding another line, only to discover that line of code was always being executed and quickly realizing the mistake, once I discovered the problem.

## Section Eleven:

This section is a little more fresh, although half of it was completed months ago. The second half was really helpful for a lot of forgotten details about C++ functions. This course also did a great job of going over recursion and the stack, and when recursion can be useful and when to stay away from it, for potential stack overflow. I remember during my undergrad, stack overflow got me on one of my final projects, in recursively destroying a binary search tree. I really enjoyed working through the second half of this section, going back over the little details that are easy to forget was very helpful.

## Section Twelve:

This section was all about pointers and references. I really enjoyed this section, it went over a lot of information that I really should have paid more attention to during my data structures and algorithms course in college. Going back over all this information really provided good insight into using pointers and references appropiately, when they're useful, the potential pitfalls, how to avoid making mistakes with them, and how to find these mistakes when you do make them. The point I really found useful was working with dynamically allocating memory on the heap, the videos did a great job of explaining how this was accomplished with pointers, what is actually taking place behind the scenes, and why memory leaks can happen and how to avoid them. This indirectly helped me better understand a HackerRank problem in C++, that required working with multidimensional arrays of varying sizes. I believe I ended up looking up a solution to avoid using vectors, since the problem specifically asked to use arrays. Of course the solution used pointers, which makes a lot more sense to me now. This section's challenge was also working with arrays, and rather than using one array for the solution I decided to go with a multidimensional arary, like from the HackerRank solution, since I have a much better grasp on this topic now. Although, there is still a lot to learn and mistakes to be made!

## Section Thirteen:

This section was huge! It was all about OOP and classes and objects within C++. This was another great section that really exposed gaps in my programming/C++ specific knowledge. I learned a ton about constructors and destructors, there was a lot more to these than I ever considered. Especially with the more strict memory management of C++ than I'm used to with Java. It was good to see the differences in how regular constructors, copy constructors, and move constructors work, and when each would be used. It also went over shallow vs. deep copying, especially with respect to raw pointers, and why a deep copy is needed if your object uses raw pointers. The other part of this section that stood out to me was the concept of const correctness, and the explanation for this took a deep dive into this and the errors you can see when you don't have it.

## Section Fourteen:

In this section I learned about operator overloading. This was an extremely useful section and I'd like to get more practice with it. There was two parts to the challenge in this section, one implementing operator overloading as member methods, and another with non-member methods. I first did the member methods, then basically copy and pasted, adjusting the methods as necessary to be used as non-member methods. I used the friend keyword, to avoid having to use setters and getters. This challenge used a template provided in the course, so I added comments for where my code starts and ends. The nice part about the course code was that test cases had already been added to main.cpp, so checking for correctness was convenient.

## Section Fifteen:

Section 15 covered inheritance. Including "is-a" and "has-a" relationships. I use Java's (extends) inheritance fairly often in simulation models for work. I'm familiar with the topic, but it was nice to get a more in-depth look at it than I've had in a while. It was especially nice to use in C++ when using initializer lists. In my opinion, it looks much cleaner. The section challenge was to take existing Account and Savings_Account classes, and using inheritance, create a Trust_Account and Checking_Account class. All code related to the Account and Savings_Account classes were supplied from the course, including some utility classes and methods. The Trust_Account needed to issue a bonus for deposits (of $50) over a certain amount ($5000) and restrict withdrawals to <20% of the account balance, and no more than 3 withdrawals. The Checking_Account required a withdrawal fee of $1.50. The Trust_Account also accrued "interest" (a percentage added at time of deposit), so it inherits from Savings_Account, which already had a deposit method to include interest, while Checking_Account just inherits Account.
