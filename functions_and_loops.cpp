/// C++ Basics Tutorial Semester 1, 2019 - 2020

#include <iostream>

using namespace std;

void printNumber(int a);  // A function declared with the void return type returns nothing.
int _power(int a, int b); // A function with the int return type will return an integer number.
inline bool divisible(int a, int b);
// A function with the bool return type will return a bollean (True/False) value.
// See implementation below for info on "inline".

int main()
{
    string aString;
    int foo, bar, rab, oof;
    bool truth;

    cout << "Enter a non-prime number: ";
    cin >> foo;
    cout << endl;
    cout << "Enter a number that can divide your first number evenly: ";
    cin >> bar;
    cout << endl;
    truth = divisible(foo, bar); // Calls the function we made called "divisible" and passes it foo and bar.

    if (truth) // We can directly check boolean values since they represent True or False
    {
        cout << "Very good! You followed the instructions!" << endl;
    }
    else
    {
        cout << "You may need a refresher on algebra..." << endl;
    }

    rab = 10;

    while (rab >= 0)
    // This is a "while" loop, as long as the condition is true, it will repeat forever.
    // We have to make sure that our while loop has some method of making the condition false
    // or by using "break" to exit the loop
    {
        printNumber(rab); // Calls our printNumber function and give is the value of rab.
        rab--;            // Decrements rab by 1.
    }

    do
    {
        printNumber(rab);
        rab++;
    } while (rab <= 10)
}

void printNumber(int a)
{
    cout << to_string(a) << endl;
    // Since void functions return nothing, they technically don't need a return statement.
}

int _power(int a, int b)
{
    int result = 1;
    if (b < 2)
    {
        if (b < 1)
            return 1; // Whenever we hit a return statement, we can disregard anything that comes after it in the function.
        return a;     // We can return variables too!
    }
    else
    {
        for (int i = 0; i < b; i++) // We'll want to loop from 0 to whatever the exponent "b" is.
        {
            result *= a; // *= is the same as doing result = result * a
        }
    }
    return result; // We'll return what's now stored in the result.
}

bool divisible(int a, int b)
{
    return (a % b) == 0; // This function is very short and simple, so we can make it an inline function.
}
