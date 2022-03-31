#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 5 + 7 << endl;
    cout << 10 % 3 << endl;         //mod, mult, division etc.
    cout << 4 + 5 * 10 << endl;     //follows PEMDAS

    int wnum = 5;
    double dnum = 5.5;

    wnum++;                         //adds 1 to variable, use to increment
    wnum--;                         //minus 1 to variable, use to increment
    wnum += 5;                      //adds 5 to variable; can use -=, *=, /=

    cout << 5.5 + 9 << endl;                //will get float back
    cout << 10 / 3 << endl;                 //will get whole number int back
    cout << 10.0 / 3.0 << endl;             //will get back float


    //import cmath for math functions
    cout << pow(2, 6) << endl;              //power
    cout << sqrt(36) << endl;               //sqare root
    cout << round(4.3) << endl;             //normal round down
    cout << round(4.6) << endl;             //normal round up
    cout << ceil(4.1) << endl;              //rounds up to whole number
    cout << floor(4.8) << endl;             //rounds down to whole number
    cout << fmax(3, 10) << endl;            //returns the bigger of the two numbers
    cout << fmin(3,10) << endl;             //returns the smallest number


    return 0;
}