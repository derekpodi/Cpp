#include <iostream>
using namespace std;

//https://www.youtube.com/watch?v=wN0x9eZLix4


//Abstraction - employee can ask, boss has complex check
//abstract class passed to Employee class, must provide method to cover AskForPromotion
class AbstractEmployee {
    virtual void AskForPromotion()=0;
};


class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
//protected allows use in subclasses
protected:
    string Name;

public:
    //Encapsulation = getters and setters
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setComapnay(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age >=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }


    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age ) {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() {
        if(Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry NO promotion this time for you!" << endl;

    }

    virtual void Work() {
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};


//Inheretince - subclass that takes in Employee methods, add to them. Constructor
class Developer:public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage )
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    //protected parent class allows use of Name instead of getName()
    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }

    void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};


class Teacher:public Employee {
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }

    void Work() {
        cout << Name << " is teaching " << Subject << endl;
    }
};


int main()
{
    Employee employee1 = Employee("Derek", "YT", 28);
    //employee1.Name = "Derek";
    //employee1.Company = "YT";
    //employee1.Age =28;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amzn", 35);
    employee2.IntroduceYourself();

    
    Developer d = Developer("Saldina", "YT", 25, "C++");
    d.FixBug();
    //to use parent method(init private) need inhereted class as: class <childClass> :public <parentClass>
    d.AskForPromotion();


    Teacher t = Teacher("Jack", "Cool School", 33, "History");
    t.PrepareLesson();
    t.AskForPromotion();

    //The most common use of Polymorphism is when a parent class reference is used to refer to a child class object
    //d.Work();
    //t.Work();
    Employee* e1 = &d;
    Employee* e2 = &t;
    e1->Work();
    e2->Work();
   

    employee1.AskForPromotion();
    employee2.AskForPromotion();


    employee1.setAge(17);       //too young, will not set age
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
    employee1.setAge(39);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;

    return 0;
}