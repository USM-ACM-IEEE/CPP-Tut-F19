/// C++ Basics Tutorial Semester 1, 2019 - 2020

// This is a single-line comment, they are denoted by "//".
// Some source files may use "///" to indicate documentation related comments.

// In C++ there are several libraries that allow you
// to complete various tasks with premade functions.
#include <iostream>
// The iostream library contains several useful functions for doing I/O operations.

using namespace std;
/* 
This is a multi-line comment, they are denoted by "/ *" at the beginning
and "* /" at the end, without the space seperating the two. 

Here we use the "using" keyword as well as the "namespace" keyword.
In layman's terms C++ namespaces allows you to specify which version of a function or class to use,
if multiple versions exist across namespaces. Classes will be covered later.

"std" is the standard namespace, as the abbreviation implies.
*/

int main()
{
    // This is the main function of the program, it contains everything that will be executed when
    // the compiled executable is ran.
    // There can be only one main() function defined in the program, it will not compile otherwise.
    // Note that not every cpp file needs to have a main() function to compile,
    // but it MUST have a main to run any code when you exicute it.
    // This concept will be brought up later for CSC 102.

    cout << "Hello World!" << endl;

    // "cout" is a variable provided by the iostream library it represents the stream to the console output.
    // You may occasionally see "cerr", it is usually reserved for program errors but
    // under normal circumstances it does the same thing as "cout".

    // In C++ the stream insertion operator "<<" will take whatever value is to right and insert it into the stream.
    // The right side does not have to be a variable, it can be a static value or string, a function, or anything
    // else that supports being printed.

    // In C++ double quotes denote a string, think words, (Ex: "a string")
    // and single quotes denotes a single character, think numbers/letters/symbols, (Ex: 'A')

    // "endl" is another variable provided by the iostream library, its underlying translation depends on your OS, but
    // it will always accomplish the same task, which is to end the current line on the terminal output and begin the next.

    return 0;

    // The main() function is expected to return an int when it completes, denoted by the "int" before "main()"
    // To do this we use the "return" keyword followed by an int.
    // The most common values to have are 0 or 1. In the Unix standard, 0 represents success and 1-255
    // represents an error. Numbers over 255 can cause undefined bahavior and generally 2-255 are reserved
    // for specific errors.

    // Note that in C++ ALL lines of code must end with a semicolon ( ; ),
    // and whitespace is only important for seperating names/keywords/etc.
    // Ex: "int main()" is the same as "int                    main()"

    // Also note that after main() returns, no code written after the return will be executed under normal circumstances.
    cout << "This code will not execute!" << endl;
}