#include <iostream>

using namespace std;

//void sayHi(string name, int age);     //Declare function at top if placed below main


void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << "\n";
}


int main()
{

    sayHi("Derek", 50);
    sayHi("Tom", 30);
    sayHi("Kate", 70);

    return 0;
}