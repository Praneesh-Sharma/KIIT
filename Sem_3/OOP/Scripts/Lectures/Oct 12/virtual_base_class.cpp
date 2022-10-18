//WAP to demonstrate the order of call of constructors and destructors in case of virtual base class .
#include <iostream>
using namespace std;

class A {
    public:
        A(){
            cout << "constructor A called" << endl;
        }
        ~A(){
            cout << "destructor A called" << endl;
        }
};
  
class B : public virtual A {
    public:
        B(){
            cout << "constructor B called" << endl;
        }
        ~B(){
            cout << "destructor B called" << endl;
        }
};
  
class C : public virtual A {
    public:
        C(){
            cout << "constructor C called" << endl;
        }
        ~C(){
            cout << "destructor C called" << endl;
        }
};
  
class D : public B, public C {
    public:
        D(){
            cout << "constructor D called" << endl;
        }
        ~D(){
            cout << "destructor D called" << endl;
        }
};
  
int main()
{
    D obj;
    
    return 0;
}