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

    string sAge;
    cout << "Enter your Age : ";
    cin >> sAge;
    int nAge = stoi(sAge);

    // Used to output whether a birthday is important
    if ((nAge >= 1) && (nAge <= 18)){
        cout << "Important Birthday" << endl;
    } else if ((nAge == 21) || (nAge == 50)){
        cout << "Important Birthday" << endl;
    } else if (nAge >= 65){
        cout << "Important Birthday" << endl;
    } else {
        cout << "Not an Important Birthday" << endl;
    }

    // A ternary operator works like a compact if else
    // statement. If the condition is true the first
    // value is stored and otherwise the second
    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    // Shows bool values as true or false
    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote : " << canIVote << endl;
    
    // ---------- ARRAYS ----------
    // An array is a collection of data of the same type
    // Declare an array of ints with the value of 1
    // Once the size is defined it can't change
    int arrnNums[10] = {1};

    // Leave out the array length
    int arrnNums2[] = {1,2,3};

    // Create an array and assign some values
    int arrnNums3[5] = {8, 9};

    // Access array values using indexes starting with 0
    cout << "1st Value : " << arrnNums3[0] << endl;

    // Change a value
    arrnNums3[0] = 7;
    cout << "1st Value : " << arrnNums3[0] << endl;

    // A multidimensional array is like a spreadsheet
    // If you think of each as layers that contain columns
    // 1st Number : Which layer
    // 2nd Number : Which column
    // 3rd Number : Which row
    int arrnNums4[2][2][2] = {{{1,2}, {3,4}},
    {{5,6}, {7,8}}};
    cout << arrnNums4[0][1][1] << endl;
    
    // ---------- VECTORS ----------
    // Vectors are used when you don't know how big the array
    // should be
    vector<int> vNums(2);

    // Add values
    vNums[0] = 1;
    vNums[1] = 2;

    // Add another to the end
    vNums.push_back(3);

    // Get vector size
    cout << "Vector Size : " << vNums.size() << endl;

    // ---------- LOOPING ----------

    // While loops continue to run the code in them
    // as long as a condition is true

    // Create the variable used in the while condition
    // before the while loop
    int i = 1;

    while (i <= 20){
        // If a value is even don't print it
        if((i % 2) == 0){
            i += 1;

            // Continue skips the rest of the code
            // and jumps back to the beginning
            // of the loop
            continue;
        }

        // Break stops execution of the loop and jumps
        // to the line after the loops closing }
        if(i == 15) break;

        cout << i << "\n";

        // Increment i so the loop eventually ends
        i += 1;
    }

    // A stringstream object receives strings separated
    // by a space and then spits them out 1 by 1
    vector<string> words;
    stringstream ss("Some Random Words");
    string word;

    // A while loop will execute as long as there are
    // more words
    while(getline(ss, word, ' ')){
        words.push_back(word);
    }

    // Cycle through each index in the vector using
    // a for loop
    for(int i = 0; i < words.size(); ++i){
        cout << words[i] << endl;
    }

    // An abbreviated for loop
    int arr3[] = {1,2,3};
    for(auto x: arr3) cout << x << endl;

    // Do while loops are guaranteed to execute at
    // least once
    // We'll create a secret number guessing game

    // We need to seed the random number generator
    // time() returns the number of seconds
    // since 1, 1, 1970
    // Include <ctime>
    srand(time(NULL));

    // Generate a random number up to 10
    int secretNum = rand() % 11;
    int guess = 0;
    do{
        cout << "Guess the Number : ";
        cin >> guess;
        if(guess > secretNum) cout << "To Big\n";
        if(guess < secretNum) cout << "To Small\n";
    } while(secretNum != guess);

    cout << "You guessed it" << endl;

    // ---------- STRINGS ----------
    // A C++ string is a series of characters that
    // can be changed
    string str1 = "I'm a string";

    // Get the 1st character
    cout << "1st : " << str1[0] << endl;

    // Get the last character
    cout << "Last : " << str1.back() << endl;

    // Get the string length
    cout << "Length : " << str1.length() << endl;

    // Copy a string to another
    string str2 = str1;

    // Copy a string after the 1st 4 characters
    string str3(str2, 4);

    // Combine strings
    string str4 = str1 + " and your not";

    // Append to the end of a string
    str4.append("!");

    // Erase characters from a string from 1 index
    // to another
    str4.erase(12, str4.length() - 1);
    cout << "New String : " << str4 << endl;

    // find() returns index where pattern is found
    // or npos (End of String) - n-position
    if(str4.find("string") != string::npos)
        cout << "String Index : " <<
                str4.find("string") << endl;

    // substr(x, y) returns a substring starting at
    // index x with a length of y
    cout << "Substring : " <<
            str4.substr(6,6) << endl;

    // Convert int to string
    string strNum = to_string(1+2);
    cout << "I'm a String : " << strNum << "\n";

    // Character functions
    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number " <<
            isalnum(letterZ) << endl;
    cout << "Is z a letter " <<
            isalpha(letterZ) << endl;
    cout << "Is 5 a number " <<
            isdigit(num5) << endl;
    cout << "Is space a space " <<
            isspace(aSpace) << endl;


    // ---------- MATH FUNCTIONS ----------
    // There are numerous math functions provided by
    // cmath man pages - en.cppreference.com/w/cpp/numeric/math

    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "max(5, 4) = " << max(5, 4) << endl;
    cout << "min(5, 4) = " << min(5, 4) << endl;
    cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
    cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
    cout << "ceil(10.45) = " << ceil(10.45) << endl;
    cout << "floor(10.45) = " << floor(10.45) << endl;
    cout << "round(10.45) = " << round(10.45) << endl;
    cout << "pow(2,3) = " << pow(2,3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;
    cout << "cbrt(1000) = " << cbrt(1000) << endl;

    // e ^ x
    cout << "exp(1) = " << exp(1) << endl;

    // 2 ^ x
    cout << "exp2(1) = " << exp2(1) << endl;

    // e * e * e ~= 20 so log(20.079) ~= 3
    cout << "log(20.079) = " << log(20.079) << endl;

    // 2 * 2 * 2 = 8
    cout << "log2(8) = " << log2(8) << endl;

    // Hypotenuse : SQRT(A^2 + B^2)
    cout << "hypot(2,3) = " << hypot(2,3) << endl;

    // Also sin, cos, tan, asin, acos, atan, atan2,
    // sinh, cosh, tanh, asinh, acosh, atanh
    
    // ---------- FUNCTIONS ----------
    // You define function prototypes outside of main
    // so main knows a functions basic settings
    // Functions are also created outside of main
    // and can be found after main below

    // Call a function that sums values
    printf("%.1f + %.1f = %.1f\n", 5.0,
            4.0, AddNumbers(5, 4));

    // The function AssignName below creates a
    // variable called name, but variables created
    // in functions are not available outside of
    // that function

    // Variable values changed in a function don't
    // change that variables value outside of the
    // function
    int age2 = 43;
    AssignAge(age2);
    cout << "New Age : " << age2 << endl;

    // You could change the value by passing it back
    age2 = AssignAge2(age2);
    cout << "New Age " << age2 << "\n";

    // ---------- POINTERS ----------
    // A Pointer stores a address in memory
    // You declare a pointer to be of the same type as the data
    // type to which it points
    // If you are storing the address of an int then the
    // pointer is an int
    // When you declare a pointer give it a null value
    int* pAge2 = NULL;

    // The reference operator returns the address for a
    // variable that can be stored in a pointer
    pAge2 = &age2;

    // Print the address Hexidecimal Number
    cout << "Address : " << pAge2 << "\n";

    // Get the value at that address with the dereference
    // operator
    cout << "Value at Address : " << *pAge2 << "\n";

    // We can create a pointer to an array and cycle
    // through the data with ++ and --
    int intArray[] = {1,2,3,4};
    int* pIntArray = intArray;

    cout << "1st " << *pIntArray <<
            " Address " << pIntArray << "\n";
    pIntArray++;
    cout << "2nd " << *pIntArray <<
            " Address " << pIntArray << "\n";
    pIntArray--;
    cout << "1st " << *pIntArray <<
            " Address " << pIntArray << "\n";

    // You can pass a pointer to a function and then
    // the function can change that variables value
    // globally
    age2 = 43;

    // Send the address for age to the function
    AssignAge3(&age2);

    cout << "Pointer Age " << age2 << "\n";

    // Create an array and double values
    int arr[] = {1,2,3,4};
    DoubleArray(arr, 4);
    for(int i = 0; i < 4; ++i){
        cout << "Array " << arr[i] << "\n";
    }

    // ---------- EXCEPTION HANDLING ----------
    // Exceptions are errors that occur when things don't
    // go as expected
    // You try to execute code that could be troublesome
    // and if an error occurs you catch it and throw
    // it to another block of code for handling

    double num3 = 10, num4 = 0;
    try{
        if(num4 == 0){
            throw "Division by Zero Error";
        } else {
            printf("%.1f / %.1f = %.1f", num3, num4,
                    (num3 / num4));
        }
    }

    catch(const char* exp){
        cout << "Error : " << exp << endl;
    }

    // ---------- OBJECTS & CLASSES ----------
    // With object oriented programming we model real
    // world objects with code. Real objects have
    // attributes (height, weight) and capabilities
    // (run, eat)
    // In object oriented programming we store
    // attribute values in fields / variables and
    // we simulate capabilities in methods / functions
    // A class is a blueprint for modeling the above
    Shape square(10, 5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);


    // The main function returns a 0 when it has executed
    // without an error
    return 0;
}

// ---------- FUNCTIONS ----------
// A function starts with the data type it will return or void
// if no value is returned
// You also list the data types for the parameters passed into
// a function and you may assign them default values

double AddNumbers(double num1 = 0, double num2 = 0){
    return num1 + num2;
}

// A variable created inside a function can't be accessed
// outside of it
void AssignName(){
    string name = "Derek";
}

void AssignAge(int age){
    age = 24;
}

int AssignAge2(int age){
    age = 24;
    return age;
}

// Function that receives a pointer
void AssignAge3(int* pAge){

    // Use dereference operator to change the value
    // at the address
    *pAge = 22;

}

// Double values in array
void DoubleArray(int *arr, int size){
    for(int i = 0; i < size; ++i){
        arr[i] = arr[i] * 2;
    }
}

// This function receives Shapes but uses the
// correct Area() automatically
// This is an example of polymorphism
void ShowArea(Shape& shape){
    cout << "Area : " << shape.Area() << "\n";
}



// -------------------- MULTIPLE TOPICS --------------------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <fstream> // Used for file IO

using namespace std;

// ---------- STRUCTS ----------

// Classes have default private fields and methods
// while structs have public
// Structs are used to model new data types, while
// classes model more complex real world objects
struct Shape{
    // Variables are public by default
    double length, width;

    // Constructors are public by default
    Shape(double l = 1, double w = 1){
        length = l;
        width = w;
    }

    // Structs can contain functions
    double Area(){
        return length * width;
    }

    // Structs can contain private members
private:
    int id;
};

// You can inherit from a struct
struct Circle : Shape{
    // Override the constructor
    // You also use this with structs
    Circle(double width){
        this->width = width;
    }

    // Override Area()
    double Area(){
        return 3.14159 * pow((width / 2), 2);
    }
};

// ---------- USED WITH LAMBDA EXPRESIONS ----------
vector<int> GenerateRandVec(int numOfNums,
        int min, int max);

// ---------- OPERATOR OVERLOADING ----------
// You can define custom operators just as you define functions
// This allows you to compare, perform calculations, etc.
// with your objects in custom ways

// Create a custom Box class with overloaded operators
class Box{
public:
    double length, width, breadth;

    // Used to hold a string representation of a box
    string boxString;

    Box(){
        length = 1, width = 1, breadth = 1;
    }
    Box(double l, double w, double b){
        length = l, width = w, breadth = b;
    }

    // You can define customer operators just like
    // you define functions
    // This is a unary operator because it operates
    // on 1 object
    // Other Unary Operators : --, *(pointer dereference),
    // -> (Member Selection), !, & (Address of), +, -
    Box& operator ++ (){
        length++;
        width++;
        breadth++;
        return *this;
    }

    // Creates a C string representation which is a
    // pointer to an array that is null terminated
    operator const char*() {
        // Creates a stream that can be loaded with
        // characters that can then be accessed as
        // a string object
        ostringstream boxStream;
        boxStream << "Box : " <<
                length << ", " <<
                width << ", " <<
                breadth;

        // Return a string representation of the stream
        boxString = boxStream.str();

        // Returns the pointer to the string array
        return boxString.c_str();
    }

    // Binary operators operate on 2 objects
    // +, -, *, /, %, ==, !=, >, <, >=, <=, &&, ||,
    // !, =, +=, -=, *=, /=, ^, [], &, |

    // Let's add boxes
    Box operator + (const Box& box2){
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = breadth + box2.breadth;
        return boxSum;
    }

    // Check for box equality
    bool operator == (const Box& box2){
        return ((length == box2.length) &&
                (width == box2.width) &&
                (breadth == box2.breadth));
    }
};


int main()
{
    // Create a struct
    Shape shape(10, 10);

    // Call a Struct function
    cout << "Square Area : " << shape.Area()
            << endl;

    // Create a struct
    Circle circle(10);

    // Call a Struct function
    cout << "Circle Area : " << circle.Area()
            << endl;

    // You can initialize a struct or class using
    // an aggregate
    Shape rectangle{10,15};
    cout << "Rectangle Area : " <<
            rectangle.Area() << endl;

    // ---------- LAMBDA EXPRESSIONS ----------
    vector<int> vecVals = GenerateRandVec(10, 1, 50);

    // Lambda Expressions make it easy to perform list
    // operations in one line of code. You designate
    // them with []
    // Here we sort a vector
    sort(vecVals.begin(), vecVals.end(),
            [](int x, int y){ return x < y; });

    for(auto val: vecVals)
        cout << val << endl;

    cout << endl;

    // copy_if works like filter does in other languages
    // Here we keep only even values in a new vector
    vector<int> evenVecVals;

    copy_if(vecVals.begin(), vecVals.end(),
            back_inserter(evenVecVals),
            [](int x){ return (x % 2) == 0; });

    for(auto val: evenVecVals)
        cout << val << endl;

    // ----- SUM A LIST -----
    int sum = 0;

    // for_each cycles through all values
    // [&] captures all variables used
    // in the body of the lambda by reference
    for_each(vecVals.begin(), vecVals.end(),
            [&] (int x) {sum += x; });

            cout << "SUM : " << sum << endl;

    // ----- RECURSIVE LAMBDA FUNCTIONS -----

    // Recursive Lambda to calculate Fibonacci Numbers
    function<int(int)> Fib =
    [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};

    // Fib(0) = 0
    // Fib(1) = 1
    // Fib(2) = 1
    // Fib(3) = 2
    // Fib(4) = 3
    cout << "Fib 4 : " << Fib(4) << endl;

    // ---------- OPERATOR OVERLOADING ----------

    Box box(10,10,10);

    // Will increment all values in the box by 1
    ++box;
    cout << box << endl;

    // Add boxes
    Box box2(5,5,5);
    cout << "Box1 + Box2 = " <<
            box + box2 << endl;

    // Check equality
    cout << "Are boxes equal : " <<
            (box == box2) << endl;

    // ---------- FILE IO ----------
    ofstream writeToFile;
    ifstream readFromFile;
    string txtToWrite = "";
    string txtFromFile = "";

    // We open the file by providing a name and then either
    // ios::app : Append to the end of the file
    // ios::trunc : If the exists delete content
    // ios::in : Open file for reading
    // ios::out : Open file for writing
    // ios::ate : Open writing and move to the end of the file
    writeToFile.open("test.txt", ios_base::out |
            ios_base::trunc);

    if(writeToFile.is_open()){
        // You can write with the stream insertion operator
        writeToFile << "Beginning of File\n";

        // You can write data in a string
        cout << "Enter data to write : ";
        getline(cin, txtToWrite);
        writeToFile << txtToWrite;

        // Close the file
        writeToFile.close();
    }

    // Open the file for reading
    readFromFile.open("test.txt", ios_base::in);

    if(readFromFile.is_open()){

        // Read text from file
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);

            // Print text from file
            cout << txtFromFile << endl;
        }
        readFromFile.close();
    }

    return 0;
}

// ---------- USED WITH LAMBDA EXPRESIONS ----------

vector<int> GenerateRandVec(int numOfNums,
        int min, int max){
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while(i < numOfNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}

// ---------- FUNCTIONS AS OBJECTS ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <fstream> // Used for file IO

using namespace std;

// 1. Created to store as a variable and to
// pass into other functions
double MultBy2(double num){
    return num * 2;
}

// 2. Functions can receive other functions
// the first double is the return type followed
// by the data types for the parameter
double DoMath(function<double(double)> func, double num){
    return func(num);
}

// 3. You can store functions in a vector
double MultBy3(double num){
    return num * 3;
}


int main()
{
    // 1. You can store functions as variables
    auto times2 = MultBy2;
    cout << "5 * 2 = " <<
            times2(5) << endl;

    // 2. Pass a function into a function
    cout << "6 * 2 = " <<
            DoMath(times2, 6) << endl;

    // 3. You can store functions in a vector
    // Create a vector using the function parameters
    // and then load the functions into the vector
    vector<function<double(double)>> funcs (2);
    funcs[0] = MultBy2;
    funcs[1] = MultBy3;
    cout << "2 * 10 = " <<
            funcs[0](10) << endl;

    return 0;
}

-------------------- TEMPLATES / ITERATORS --------------------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <fstream> // Used for file IO
#include <deque>
#include <iterator>

using namespace std;

// ---------- MACROS ----------
// This is a macro constant that will replace
// PI with 3.14159 in the code before execution
#define PI 3.14159

// This is a macro function that will do the same with
// a function
#define AREA_CIRCLE(radius) (PI * (pow(radius, 2)))

// ----- TEMPLATE FUNCTIONS -----

// We use templates to create functions or classes
// that can work with many types
// Templates differ from function overloading in that
// instead of having a function that does similar
// things with different objects a template does the
// same thing with different objects

// This says this is a function template that generates
// functions that except 1 parameter
template <typename T>
void Times2(T val){
    cout << val << " * 2 = " <<
            val * 2 << endl;
}

// Receive multiple parameters and return a value
template <typename T>
T Add(T val, T val2){
    return val + val2;
}

// Work with chars and strings
template <typename T>
T Max(T val, T val2){
    return (val < val2) ? val2 : val;
}

// ----- TEMPLATE CLASSES -----

// Template classes are classes that can work with
// different data types

// You can define that you may receive parameters
// with different types, but they don't have to
// be different
template <typename T, typename U>
class Person{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w){
        height = h, weight = w;
        numOfPeople++;
    }
    void GetData(){
        cout << "Height : " <<
            height <<
            " and Weight : " <<
            weight << endl;
    }
};

// You have to initialize static class members
template<typename T, typename U> int Person<T, U>::numOfPeople;

int main()
{
    cout << "Circle Area : " <<
            AREA_CIRCLE(5) << endl;

    // ----- TEMPLATE FUNCTIONS -----
    // The template function can receive ints or floats
    Times2(5);
    Times2(5.3);

    // Multiple parameters and returned value
    cout << "5 + 4 = " <<
            Add(5,4) << endl;
    cout << "5.5 + 4.6 = " <<
            Add(5.5,4.6) << endl;

    // Get biggest value
    cout << "Max 4 or 8 = " <<
            Max(4, 8) << endl;
    cout << "Max A or B = " <<
            Max('A', 'B') << endl;
    cout << "Max Dog or Cat = " <<
            Max("Dog", "Cat") << endl;

    // ----- END OF TEMPLATE FUNCTIONS -----

    // ----- TEMPLATE CLASSES -----

    // When creating the object you must define the
    // data types used
    Person<double, int> mikeTyson (5.83, 216);
    mikeTyson.GetData();

    // You access static values using the object
    // and not the class
    cout << "Number of people : " <<
            mikeTyson.numOfPeople << endl;

    // ----- END OF TEMPLATE CLASSES -----

    // ----- CONTAINERS -----
    // We have already seen the STL container vector
    // There are many other special ways of storing data

    // ----- DOUBLE ENDED QUEUE -----

    // A double ended queue (Deck) is a dynamic array that can
    // be expanded or contracted on both ends
    deque<int> nums = {1,2,3,4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums)
        cout << x << endl;

    // You can access index values, but they are costly
    // because values aren't stored contigously, but
    // instead use multiple arrays
    cout << nums[0] << endl;

    // ----- END DOUBLE ENDED QUEUE -----

    // ----- ITERATORS -----
    // Iterators are used to point at container
    // memory locations
    vector<int> nums2 = {1,2,3,4};

    // Define an iterator as the same type
    vector<int>::iterator itr;

    // Refer to the vectors begin and end while
    // incrementing the iterator
    for(itr = nums2.begin();
            itr < nums2.end();
            itr++){

        // Get value at the pointer
        cout << *itr << endl;
    }

    // You can also increment a set number of spaces
    // Create an iterator and point it at the beginning
    // of the vector
    vector<int>::iterator itr2 = nums2.begin();

    // Advance 2 spaces
    advance(itr2, 2);
    cout << *itr2 << endl;

    // Next works like advance, but it returns an
    // iterator
    auto itr3 = next(itr2, 1);
    cout << *itr3 << endl;

    // Previous moves a set number of indexes and
    // returns an iterator
    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;

    // You can also insert at a defined index
    vector<int> nums3 = {1,4,5,6};
    vector<int> nums4 = {2,3};
    auto itr5 = nums3.begin();
    advance(itr5, 1);
    copy(nums4.begin(), nums4.end(),
            inserter(nums3, itr5));

    for(int &i: nums3)
        cout << i << endl;

    return 0; }
-------------------- POINTERS / MALLOC / TEMPLATES --------------------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <iterator>
#include <memory>
#include <stdio.h>

using namespace std;

// A Smart pointer is a class that provides the
// power of pointers, but also handles the reallocation
// of memory when it is no longer required (The pointer
// is automatically destroyed)

// typedef creates an alias for a more complex type name
typedef vector<int32_t> intVec;

int main()
{
    /* MALLOC EXAMPLE
    // When you define a primitive type like int or
    // float you define exactly the amount of space
    // to set aside

    // If you need to define how much space to set aside
    // you could call malloc() and tell it how much
    // space to set aside and it returns the address to
    // that memory address

    int amtToStore;
    cout << "How many numbers do you want to store : ";
    cin >> amtToStore;

    // Create an int pointer and set aside enough space
    int * pNums;

    // Cast the pointer and define how much space to set aside
    pNums = (int *) malloc(amtToStore * sizeof(int));

    // Check if memory was allocated
    if(pNums != NULL){
        int i = 0;

        // Store values
        while(i < amtToStore){
            cout << "Enter a Number : ";
            cin >> pNums[i];
            i++;
        }
    }

    cout << "You entered these numbers\n";
    for(int i = 0; i < amtToStore; i++){
        cout << pNums[i] << endl;
    }

    // Delete the pointer
    delete pNums;
    */

    // Smart Pointer Solution
    int amtToStore;
    cout << "How many numbers do you want to store : ";
    cin >> amtToStore;

    // This memory will be automatically reallocated
    unique_ptr<int[]> pNums(new int[amtToStore]);

    // unique_ptr can only have one owner
    // so this throws an error
    // unique_ptr<int[]> pNums2 = pNums;
    // I'll cover how to do this with shared_ptr
    // in a later tutorial

    if(pNums != NULL){
        int i = 0;

        // Store values
        while(i < amtToStore){
            cout << "Enter a Number : ";
            cin >> pNums[i];
            i++;
        }
    }

    cout << "You entered these numbers\n";
    for(int i = 0; i < amtToStore; i++){
        cout << pNums[i] << endl;
    }

    return 0;
}

// Here I demonstrate how to use templates
// polymorphically

// Base class all pizzas inherit along with MakePizza
// which will be overridden
class Pizza{
public:
    virtual void MakePizza() = 0;
};

// The last templates that will be called
class NYStyleCrust {
public:
  string AddIngredient() {
    return "Crust so Thin You can See through it\n\n";
  }
};

class DeepDishCrust {
public:
  string AddIngredient() {
    return "Super Awesome Chicago Deep Dish Crust\n\n";
  }
};

// End of last templates called

// The middle templates called
template <typename T>
class LotsOfMeat: public T {
public:
  string AddIngredient() {
    return "Lots of Random Meat, " + T::AddIngredient();
  }
};

template <typename T>
class Vegan: public T {
public:
  string AddIngredient() {
    return "Vegan Cheese, Veggies, " + T::AddIngredient();
  }
};

// End of middle templates called

// We inherit from Pizza as well as the initial next template
template <typename T>
class MeatNYStyle: public T, public Pizza {
public:
  void MakePizza() { cout << "Meat NY Style Pizza : " <<
          T::AddIngredient(); }
};

template <typename T>
class VeganDeepDish: public T, public Pizza {
public:
  void MakePizza() { cout << "Vegan Deep Dish : " <<
          T::AddIngredient(); }
};

int main()
{
    // unique_ptr is a smart pointer that disposes of
    // a pointer when it is no longer in use
    vector<unique_ptr<Pizza>> pizzaOrders;

    // Generate Pizza types and place them at the end of the vector
    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());
    pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>());

    // Call the pizzas and execute the directions
    // for making them
    for(auto &pizza: pizzaOrders){
        pizza->MakePizza();
    }

    return 0;
}

// ---------- THREADS ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>

using namespace std;

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

// ----- SIMPLE THREAD EXAMPLE -----

void ExecuteThread(int id){
    // Get current time
    auto nowTime = chrono::system_clock::now(); 

    // Convert to a time we can output
    time_t sleepTime =
            chrono::system_clock::to_time_t(nowTime);

    // Convert to current time zone
    tm myLocalTime = *localtime(&sleepTime);

    // Print full time information
    cout << "Thread " << id <<
            " Sleep Time : " <<
            ctime(&sleepTime) << endl;

    // Get separate pieces
    cout << "Month : " <<
            myLocalTime.tm_mon << endl;
    cout << "Day : " <<
            myLocalTime.tm_mday << endl;
    cout << "Year : " <<
            myLocalTime.tm_year + 1900 << endl;
    cout << "Hours : " <<
            myLocalTime.tm_hour << endl;
    cout << "Minutes : " <<
            myLocalTime.tm_min << endl;
    cout << "Seconds : " <<
            myLocalTime.tm_sec << "\n" << endl;

    // Put the thread to sleep for up to 3 seconds
    this_thread::sleep_for (chrono::seconds(GetRandom(3)));
    nowTime = chrono::system_clock::now();
    sleepTime =
            chrono::system_clock::to_time_t(nowTime);
    cout << "Thread " << id <<
            " Awake Time : " <<
            ctime(&sleepTime) << endl;

}

int main()
{
  // Create a thread and pass a parameter
  // to the function
  thread th1 (ExecuteThread, 1);

  // Join the thread to the main thread
  // meaning main waits for this thread to
  // stop executing before continuing execution
  // of code in main
  th1.join();

  thread th2 (ExecuteThread, 2);
  th2.join();

  return 0;
}


// ---------- SEQUENCE CONTAINERS ----------
