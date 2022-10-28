#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A(int x=0){
            a = x;
        }
        void show(){
            cout << a << endl;
        }
        A compare(A t){
            if(this->a > t.a){
                return *this;
            }
            return t;
        }
};

int main(){
    A c(7);
    A d(8);
    A e = c.compare(d);
    e.show();
    return 0;   
}