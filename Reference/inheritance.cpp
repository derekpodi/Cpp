#include <iostream>
using namespace std;

//Chef superclass, ItalianChef is subclass. Can inherit and override functions

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{                    //inherit the Chef class
    public :
        void makePasta() {
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianchef;
    italianchef.makeSpecialDish();

    return 0;
}