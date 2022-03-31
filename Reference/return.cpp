#include <iostream>

using namespace std;

double cube(double num){                //declare return type for function (void, int, double, string)
    double result = num * num * num;
    return result;                      //code exits block on return
    cout << "hello";                    // Not executed!
}                            


int main()
{
    //double answer = cube(5.0);
    cout << cube(5.0);                  //answer - answer saved as var

    return 0;
}