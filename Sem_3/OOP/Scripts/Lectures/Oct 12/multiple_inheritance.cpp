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

class C: public A, public B{
    public:
        C(){
            cout << "constructor C called" << endl;
        }
        ~C(){
            cout << "destructor C called" << endl;
        }
};

int main(){
    C obj;

    return 0;
}