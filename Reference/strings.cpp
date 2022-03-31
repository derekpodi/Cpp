#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    
    cout << "Hello\n";      //\n creates newline from string (can omit endl)

    cout << phrase.length() << endl;        //function for length

    phrase[0] = 'B';                        //zero index, can reset
    cout << phrase[0] << endl;              //print 1st letter B now

    cout << phrase.find("Academy", 0) << endl;      //find string, start search at 0 index, returns index found at

    string phrasesub;
    phrasesub = phrase.substr(8,3);
    cout << phrasesub;            //slice starts at index 8, goes for 3 letters

    

    return 0;
}