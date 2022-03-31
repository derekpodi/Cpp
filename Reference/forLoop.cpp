#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1, 2, 5, 7, 3};

    for(int i = 0; i < 5; i++){         //init condition, loop guard, run after ieration
        cout << nums[i] << endl;        //loops the array length
    }

    return 0;
}