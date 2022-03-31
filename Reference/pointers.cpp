#include <iostream>
using namespace std;

//pointers == memory address

int main() 
{
    int age = 19;               //physically stored in RAM - computer memory
    int *pAge = &age;

    double gpa =2.7;            //container that houses info has address, access via address
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;      //*p convention for naming pointers address

    //Addresses
    cout << "Age: " << &age << endl;            //& used to access address, pointer
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    //Derefencing Pointer
    cout << *pAge;              //19   //*&gpa  //deference pointer with * -- get value at address

    return 0;
}
