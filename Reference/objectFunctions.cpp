#include <iostream>
using namespace std;

//also refered to as instance functuions

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){                       //honors roll check
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};


int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;           //false == 0, true == 1
    cout << student2.hasHonors() << endl;

    return 0;
}