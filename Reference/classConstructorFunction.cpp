#include <iostream>
using namespace std;

//constructor function within the class gets setup at creation of new object
//constructor makes creation of objects easier, cleaner
class Book{                         
    public:
        string title;
        string author;
        int pages;

//Can pass multiple constructors - first one here is a default, no args passed
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){        
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};



int main()
{
    Book book1("Harry Potter", "J.K. Rowling", 500 );       //constructor called

    Book book2("Lord of the Rings", "J.R.R. Tolkien", 700);

    Book book3;
    
    cout << book1.title << endl;
    cout << book2.author << endl;

    cout << book3.title << endl;




    return 0;
}
