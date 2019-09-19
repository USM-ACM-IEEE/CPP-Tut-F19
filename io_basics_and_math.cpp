#include <iostream>
#include <fstream> // File stream library - Allows you to read and write to files
#include <iomanip> // I/O Manipulation library - As the name says
#include <string> // String library - Adds extra functions for strings

using namespace std;

int main()
{
    ofstream outfile("myoutput.txt");
    // "ofstream" is the output file stream datatype added by fstream
    // ofstreams are for sending output to a file the same way as you would the command line.
    // We can initialize our ofstream with a string representing the filename.
    ifstream infile;
    // Just as with ofstream, "ifstream" is the input file stream.
    // For now we will not initialize it.
    int foo, bar;
    float rab, oof;
    const short WIDTH = 50;
    string aString;

    cout << "Enter a whole number: " << endl;
    cin >> foo;
    cout << foo << "*5 = " << (foo*5) << endl;
    cout << "Enter a number with a decimal: " << endl;
    cin >> rab;
    cout << rab << "/8.0 = " << (rab/8.0) << endl;
    cout << "Enter one number with decimal, and then one whole number: " << endl;
    cin >> oof >> bar;
    cout << "Let's see what happens when we do a few things to these numbers..." << endl;
    cout << oof << " + " << bar << " = " << (oof+bar) << endl;
    cout << oof << " - " << bar << " = " << (oof-bar) << endl;
    cout << oof << " * " << bar << " = " << (oof*bar) << endl;
    cout << oof << " / " << bar << " = " << (bar != 0 ? (oof/bar) : -0.0 ) << endl; 
    // The ( X ? T : F ) is called a ternary statement, you'll learn about these later on.
    // Think of it as a really short if-else.
    cout << "Enter a large whole number and I'll tell you if it is divisible by 15: " << endl;
    outfile << foo << " " << bar << " " << rab << " " << oof << endl; 
    // We can put things into the input file just like you can the command line.
    // In this case I want to store everything that's in the four variables seperated by spaces.
    cin >> foo;
    
    if (foo % 15 == 0) // An "if" statement allows you to execute code based on if a statement is true.
    {
        cout << foo << " is divisible by 15." << endl;
    }
    else // An "else" statement must follow an "if" statement, it only executes if the statement is false.
    {
        cout << foo << " is not divisible by 15, remainder: " << foo%15 << endl;
    }
    // The modulo operator "%" is another mathematical operator which acts like division, 
    // but returns the remainder instead of the quotient.
    // In the above "if" statement, "foo%15" can return any number between 0 and 14 inclusive.
    
    foo = bar = rab = oof = 0; // A bunch of equals chained together, will set all the variables listed to the rightmost value (zero);

    outfile.close(); // This closes the output file and signifies you are finished doing operations on it.
    infile.open("myoutput.txt"); // Since we did not initialize the infile when it was declared, we must open the file manually.

    infile >> foo >> bar >> rab >> oof; // Just like the command line cin, we take input from our infile in the same way.
    infile.close(); // It is good practice to close your files once you have finished working with them and before the program ends.

    cout << endl << "Your original entries where: ";
    // cout << foo << endl << rab << endl << oof << endl << bar << endl; 
    // These values should have been read from the output file we output to earlier

    // Ok now let's do some things that are a little more advanced...

    cout << "\n"; 
    // Backslash signifies that an escape character or escape sequence will follow, for instance "\n" stands for newline.
    // Or for a more complicated example, in this case command line text color red, "\x1b[31m" is a valid escape sequence.

    cout << setfill('_') << setw(WIDTH) << "_" << endl << setfill('.') << endl;
    // "setfill('~')" is a function provided by iomanip that allows you to set your fill character in the terminal (Default is space).
    // "setw(WIDTH)" as the name implies, sets the width (in characters) of the field we want to fill.
    
    aString = "Entry 1: ";
    cout << left << aString << setw(WIDTH - aString.length()) << right << foo << endl; 
    // <string>.length() is a function provided by the "string" library that will tell you the length of a string to the left of the "."
    // We subtract that length from the overall width to get the correct fill in our table.
    // "left" aligns our output to the left side of our set width, "right" aligns it to the right side.
    aString = "Entry 2: ";
    cout << left << aString << setw(WIDTH - aString.length()) << right << rab << endl;
    
    aString = "Entry 3: ";
    cout << left << aString << setw(WIDTH - aString.length()) << right << oof << endl;
    
    aString = "Entry 4: ";
    cout << left << aString << setw(WIDTH - aString.length()) << right << bar << endl;

    aString = "Average of Entries: ";
    cout // It is not required that a cout stay all on the same line, all that matters is that it ends with ";"
        << fixed << setprecision(4) 
        // "fixed" forces the output to use standard decimal notation instead of scientific notation.
        // "setprecision(4)" forces the output to always display 4 digits after the decimal, including all 0's
        << left << aString << setw(WIDTH - aString.length()) << right 
        << (foo+bar+rab+oof)/4 << endl; 
        // Just like a graphing calculator, the program will follow "PEMDAS" order of operations (normally)
    
    cout << setfill('_') << setw(WIDTH) << "_" << endl;
    
    cout << endl << "And that's the quick maths!" << endl;

    return 0;
}
