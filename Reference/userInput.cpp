#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;                      
    cout << "Enter your name: ";
    getline(cin, name);             //getline for string input
    cout << "Hello " << name << "\n";


    int age;                        //works for char, int, double inputs (not string!)
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old. \n";
    


    return 0;
}