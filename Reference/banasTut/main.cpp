//https://www.newthinktank.com/2019/10/c-tutorial-2019/

/*
 * Multi-line
 * Comment
 */

// Single line comment

// Includes functions used to read and write data
#include <iostream>

// Contains functions for converting from 1 data type to
// another, random number generation, memory management,
// searching, math, sorting and other general purpose functions
#include <cstdlib>

// Allows you to use the STL string class
#include <string>

// Provides functions to find min and max values
// for data types
#include <limits>

// Will be introduced below
#include <string>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

#include "Shape.h"
#include "Circle.h"

// State that we can to use the standard namespace which means
// we don't have to type cout to output information, but
// can instead use cout
using namespace std;

// A global variable is declared outside of all functions
// and it can be accessed any place in your code
int imGlobal = 0;

// Use const to declare a variable constant thats value
// cannot be changed
const double PI = 3.141;

// ----- FUNCTION PROTOTYPES -----
// You define the return type and data types for functions
// using a function prototype so main knows what is to be expected
// from this function
double AddNumbers(double num1, double num2);

void AssignName();

void AssignAge(int age);

int AssignAge2(int age);

// This function receives pointers
void AssignAge3(int* pAge);

// Double values in array passed
void DoubleArray(int *arr, int size);

void ShowArea(Shape& shape);

// Execution of code starts in the main function
// argc and argv is optional data that could be passed
// to the program if it was executed in a terminal
// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char** argv) {

    // Outputs the string Hello World to the screen followed by a newline
    // cout is your console or screen
    // << : Stream insertion operator which puts the string
    // into the cout stream to display it
    // endl issues a newline and forces a write to the console
    cout << "Hello World" << endl;

    // Variable names can contain letters, numbers, underscores
    // but not math operators, spaces and can't start with a number

    // ---------- DATA TYPES ----------
    // Data types define how much memory to set aside
    // for data we want to store

    // Booleans can have a value of true (1), or false (0)
    bool married = true;

    // Chars store 256 single characters represented by
    // keys on your keyboard
    char myGrade = 'A';

    // There are many integer types with different min
    // and max values
    cout << "Min unsigned short int " <<
            numeric_limits<unsigned short int>::min()
            << endl;
    cout << "Max unsigned short int " <<
            numeric_limits<unsigned short int>::max()
            << endl;
    cout << "Min short int " <<
            numeric_limits<short int>::min()
            << endl;
    cout << "Max short int " <<
            numeric_limits<short int>::max()
            << endl;
    cout << "Min int " <<
            numeric_limits<int>::min()
            << endl;
    cout << "Max int " <<
            numeric_limits<int>::max()
            << endl;
    cout << "Min long " <<
            numeric_limits<long>::min()
            << endl;
    cout << "Max long " <<
            numeric_limits<long>::max()
            << endl;

    // Floating type numbers have decimal places
    cout << "Min float " <<
            numeric_limits<float>::min()
            << endl;
    cout << "Max float " <<
            numeric_limits<float>::max()
            << endl;
    cout << "Min double " <<
            numeric_limits<double>::min()
            << endl;
    cout << "Max double " <<
            numeric_limits<double>::max()
            << endl;
    cout << "Min long double " <<
            numeric_limits<long double>::min()
            << endl;
    cout << "Max long double " <<
            numeric_limits<long double>::max()
            << endl;

    // The float is accurate to 6 digits
    float f1 = 1.1111111;
    float f2 = 1.1111111;

    // Printf allows you to print with formatting
    // Here I say I want to print 7 decimals
    printf("Sum = %.7f\n", (f1 + f2));

    // Doubles have 15 digits of precision
    double d1 = 1.1111111111111111;
    double d2 = 1.1111111111111111;
    printf("Sum 2 = %.16f\n", (d1 + d2));

    // You can have the compiler assign the type
    auto whatAmI = true;

    // Get the number of bytes assigned to a type
    cout << "int Bytes : " << sizeof(int) << endl;

    // More about printf()
    // char, int, 5 space right justified int,
    // 3 decimal float / double, string specifiers
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

    // Create a string
    string q1 = "Enter a Number : ";

    // Create strings to store values
    string num1, num2;

    cout << q1;

    // Receive user input and store it
    cin >> num1;

    cout << "Enter Another Number : ";
    cin >> num2;

    // Convert strings into ints
    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2);

    // Math Operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    // ---------- CONDITIONALS ----------
    // Conditional Operators : > < >= <= == !=
    // Logical Operators : && || !
