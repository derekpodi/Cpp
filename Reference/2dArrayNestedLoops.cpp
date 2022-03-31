#include <iostream>
using namespace std;


int main()
{
    int numberGrid[3][2] = {            //Number of arrays, numbers inside each array
        {1,2},
        {3,4},
        {5,6}
    };

    // cout << numberGrid[2][0];        //prints single element from matrix

    for (int i=0; i<3; i++) {           //nested for loops cycle matrix i,j
        for(int j=0; j<2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}