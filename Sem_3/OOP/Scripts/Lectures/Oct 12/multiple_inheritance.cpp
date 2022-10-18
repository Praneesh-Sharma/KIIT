//WAP to demonstrate the order of call of constructors and destructors in case of multiple inheritance.
#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "constructor A called" << endl;
        }
        ~A(){
            cout << "destructor A called" << endl;
        }
};

class B{
    public:
        B(){
            cout << "constructor B called" << endl;
        }
        ~B(){
            cout << "destructor B called" << endl;
        }
};

class C: public A, public C{
    public:
        C(){
            cout << "constructor C called" << endl;
        }
        ~C(){
            cout << "destructor C called" << endl;
        }
};

int main(){
    B obj1;
    C obj2;

    return 0;
}