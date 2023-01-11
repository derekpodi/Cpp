#include <iostream>

using namespace std;


int main()
{
    int index = 1;                      //will not start loop if index=6
    while(index <= 5){                  //infinite loop if this never becomes true
        cout << index << endl;
        index++;
    }

/*
    do {                                //do-while loop - does code first, then checks condition after
        cout << index << endl;
        index++;
    } while (index <= 5);
*/

    return 0;
}

