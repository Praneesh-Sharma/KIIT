/*Create a class complex which stores real and imaginary part of a complex number.
Include all types of constructors and destructor. The destructor should display a
message about the destructor being invoked. Create objects using different
constructors and display them.*/
#include <iostream>
using namespace std;

class complex{
    private:
        int real, imag;
    public:
        complex(){
        }
        complex(int a){
            real = imag = a;
        }
        complex(int a, int b){      //inline parameterized comstructor defined
            real = a;
            imag = b;
        }
        ~complex(){
            cout << "Destructor invoked." << endl;      //destructor being invoked
        }
        friend void display(complex);
};

void display(complex c){
    cout << "Complex number: " << c.real << "+" << c.imag << "i" << endl;
}

int main(){
    complex A(5,6);
    complex B(2);
    complex C;

    display(A);
    display(B);
    display(C);
    return 0;
}