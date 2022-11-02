// WAP to demonstrate use of pure virtual function and abstract base class.
#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        virtual void show(){}
};

class B: public A{
    int b;
    public: 
        B(){
            b = 20;
        }
        void show(){
            cout << b;
        }
};

int main(){
    A *p;
    B m;
    p = &m;
    p->show();
    return 0;
}