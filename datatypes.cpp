/// C++ Basics Tutorial Semester 1, 2019 - 2020

#include <iostream>
#include <iomanip> // Allows manipulation of input and output

// Ignore the following two includes, they are for this demonstration only,
// you DO NOT need to know them!
#include <cfloat>  // For floating point limits
#include <climits> // For whole-number limits
// ---------------------------------------------

using namespace std;

int main()
{
    bool bool1; // True/False or 1/0
    char char1; // ASCII Characters -128 to 127 (x86 and x86-64)
    unsigned char uchar1; // ASCII Characters 0 to 255 (Power PC and Macintosh)
    short short1; // 16-bit integers
    unsigned short ushort1; // 16-bit natural numbers
    int integer1; // Integers (Size Varies, usually >= 16-bit)
    unsigned uinteger1; // Natural Numbers (Size Varies, usually >= 16-bit)
    long long1; // Larger Integers (>= 32-bit)
    unsigned long ulong1; // Larger Natural Numbers (>= 32-bit)
    long long int ll1; // Very Large Integers (>= 64-bit)
    unsigned long long int ull1; // Very Large Natural Numbers (>= 64-bit)
    float float1; // Single precision real number
    double double1; // Double precision real number
    string string1; // An array of chars terminated with the "null" character, essentially holds "human words"

    cout << "I'm a string!" << endl;
    cout << "\n" << static_cast<int>(CHAR_MIN) << " is the minimum signed char value; " << static_cast<int>(CHAR_MAX) << " is the maximum." << endl;
    cout << static_cast<int>(UCHAR_MAX) << " is the maximum  unsigned char value; " << endl;
    cout << "\n" << SHRT_MIN << " is the minimum signed short value; " << SHRT_MAX << " is the maximum." << endl;
    cout << USHRT_MAX << " is the maximum  unsigned short value; " << endl;
    cout << "\n" << INT_MIN << " is the minimum signed int value; " << INT_MAX << " is the maximum." << endl;
    cout << UINT_MAX << " is the maximum  unsigned int value; " << endl;
    cout << "\n" << LONG_MIN << " is the minimum signed long value; " << LONG_MAX << " is the maximum." << endl;
    cout << ULONG_MAX << " is the maximum  unsigned long value; " << endl;
    cout << "\n" << LLONG_MIN << " is the minimum signed long long value; " << LLONG_MAX << " is the maximum." << endl;
    cout << ULLONG_MAX << " is the maximum  unsigned long long value; " << endl;
    cout << "\n" << scientific << FLT_MIN << " is the minimum float value; " << fixed << FLT_MAX << " is the maximum." << endl;
    cout << "\n" << scientific << DBL_MIN << " is the minimum double value; " << fixed << DBL_MAX << " is the maximum." << endl;

    return 0;
}
