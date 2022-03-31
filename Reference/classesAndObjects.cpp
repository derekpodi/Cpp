#include <iostream>
using namespace std;

//classes create a new datatype; blueprint or spec
//object is an actual instance of the class

class Book{                         //capital letter convention
    public:
        string title;
        string author;
        int pages;
};



int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K. Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "J.R.R. Tolkien";
    book2.pages = 700;

    cout << book1.title << endl;
    cout << book2.author << endl;



    return 0;
}
