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

## Section Sixteen:

Section 16 covered polymorphism, specifically acheiving dynamic polymorphism through the use of virtual functions, abstract classes, and base class pointers. This section was really interesting and really helps show how useful inheritance and polymorphism can be. We created an abstract class, to act as an interface, called I_Printable, that the Account class inherits. Making it available to all the other classes that inherit Account. We also made Account an abstract class, by declaring deposit and withdraw as pure virtual functions. Once we overrode print(), deposit(), and withdraw() in all the other classes, we could then use base class pointers, pointing to the child objects (Trust_, Savings_, or Checking_Account) and get the expected behavior from each function without knowing which type of account it was. This was useful for cleaning up the Account_Util class, which could call the function for each object from an array of Account pointers. Which really helps explain exactly what polymorphism is. I know in my early CS classes during school I struggled to truly understand what it was, or at least why it would be useful.

## Section Seventeen:

This section covered smart pointers (unique, shared, and weak). I'm happy I finally got to this section. The course explains the problems associated with raw pointers and mentioned smart pointers much earlier. It was nice to see these in action and how to use them. It also explained how the pointers differ from each other. Unique, as it sounds, cannot be shared, but can be moved. Shared keeps a track of references so that it knows when it can be deleted. Weak is like shared, except it doesn't have ownership, so in cases like doubly-linked-lists, you don't end up with two objects pointing to each other and not allowing them to be deleted. It also went over the ability to make custom deleters, which I'm not exactly sure of a use case for them right now. Hopefully I can find one in the future. In this sections challenge, we were to implement the three functions that had been prototyped for us in the provided main.

## Section Eighteen:

In section 18 I took a deeper dive into exception handling than I ever have before. This was a good section to learn more about how exceptions are thrown and then how stack unwinding occurs. I have used exception handling and throwing new exceptions in Java, but have never really looked into or considered some of the implications within c++. The course brings up good points about where you catch the exception can change the behavior, especially if you're multiple function calls deep, but have the catch a few levels up. If you're using pointers in one of those function calls, but don't delete until after a function call, that section of code won't be executed because of how the stack unwinds. That's why it's important to really understand what happens when an exception is thrown and how to properly handle it.

## Section Nineteen:

This was a fun section, working with input and output files, and formatting output. I had recently done a HackerRank problem that required formatting output (specifically formatting a number as hex, and in scientific notation). Because I hadn't looked much into this, I had to look up the string manipulators that would accomplish this, had I waited to complete the challenge until I had done this section it would have been a breeze!
There was four parts to the challenges of this section. Then we also went over stringstreams and how to use them, especially to validate inputs. The challenge descriptions are as follows:

Part 1 required just formatting the output of some structs, into a table format.

Part 2 was reading from an input file that had an answer key, student names, and their responses. Then outputting to std::cout a table of student names, scores, and the average score.

Part 3 was much more fun, in my opinion, of using an input file of Romeo and Juliet and letting a user search for a substring. The video solution showed reading in each word, and checking that word for the substring. However, doing this would miss if the substring was in a word multiple times. So I instead chose to check each character against the first character of the search word. Then loop through the remaining letters of the word to check for a complete match. If I reach a letter that doesn't match, I check if it is the first character of the search word again and (using goto with labels) go back to the inner loop, if not go back to the outer loop to continue searching. I found more matches with this comparing the different approaches. Especially if the search word was small (one or two characters).

Part 4 involve copying an input file of Romeo and Juliet and prepending line numbers. I found in this one, while the video solution could check if line == "" to avoid numbering and counting blank lines, that I couldn't. The return character '\r' was the issue, so I instead checked for '\r' or '\n' to cover theses cases.
