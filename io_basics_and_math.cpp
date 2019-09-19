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

    cout << "Enter a whole number: " << endl;
    cin >> foo;
    cout << foo << "*5 = " << (foo*5) << endl;
    cout << "Enter a number with a decimal: " << endl;
    cin >> rab;
    cout << rab << "/8.0 = " << (rab/8.0) << endl;
    cout << "Enter one decimal number, and then one whole number: " << endl;
    cin >> oof >> bar;
    cout << "Let's see what happens when we do a few things to these numbers..." << endl;
    cout << bar << " + " << oof << " = " << (bar+oof) << endl;
    cout << bar << " - " << oof << " = " << (bar-oof) << endl;
    cout << bar << " * " << oof << " = " << (bar*oof) << endl;
    cout << bar << " / " << oof << " = " << (oof != 0 ? (bar/oof) : -0.0 ) << endl; 
    // The ( X ? T : F ) is called a ternary statement, you'll learn about these later.
    // Think of it as a really short if-else.
    cout << "Enter a large whole number and I'll tell you if it is divisible by 15: " << endl;
    outfile << foo << " " << bar << " " << rab << " " << oof << endl; 
    // We can put things into the input file just like you can the command line.
    // In this case I want to store everything that's in the four variables seperated by spaces.

    


    return 0;
}
