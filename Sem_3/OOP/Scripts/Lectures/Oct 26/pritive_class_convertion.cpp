//primitive to class type conversion
#include <iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){};
        Complex(int n){
            a=n;
            b=0;
        }
        void show(){
            cout << "a = " << a << ", b = " << b << endl;
        }
};

int main(){
    Complex c;
    int x=5;
    c = x;
    c.show();
    return 0;
}