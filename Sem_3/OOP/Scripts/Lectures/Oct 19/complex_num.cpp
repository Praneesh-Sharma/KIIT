//Create a class which a complex number. Add two objects and display the resultant object. Overload the ++ (post and pre) operator for the class.
#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        void input(){
            cout << "Enter real and imaginary part: ";
            cin >> real >> imag; 
        }
        Complex operator +(Complex test){
            Complex temp;
            temp.real = real + test.real;
            temp.imag = imag + test.imag;
            return temp;
        }
        Complex operator ++(){
            Complex temp;
            temp.real = real+1;
            temp.imag = imag+1;
            return temp;
        }
        void show(){
            cout << real << "+ i" << imag << endl;
        }
};

int main(){
    Complex a,b,c,d;
    a.input();
    b.input();
    c = a+b;
    c.show();
    d = ++a;
    d.show();

    return 0;
}