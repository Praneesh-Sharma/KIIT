//Inheritance

#include <iostream>
using namespace std;

class Chef {
    public: 
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef: public Chef{                       //ItalianChef inherits from chef class and can do everything a chef does
    public:                                           //Chef class is a super class
        void makePasta(){                             //Italian chef class is a sub class
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){                       //functions can be overwritten
            cout << "The chef makes chicken parm" << endl;
        } 
};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    cout << "" << endl;

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}