//class tp cass type conversion using constructor
#include <iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(){}
        A(int x, int y){
            a = x;
            b = y;
        }
        void showA(){
            cout << "a = " << a << ", b = " << b << endl;
        }
        int get1(){
            return(a);
        }
        int get2(){
            return(b);
        }
};

class B{
    int m, n;
    public:
        B(){}
        B(A x){
            m = x.get1();
            n = x.get2();
        }
        void showB(){
            cout << "m = " << m << ", n = " << n << endl;
        }
};

int main(){
    A t(1,2);
    B k(t);
    t.showA();
    k.showB();
    return 0;
}