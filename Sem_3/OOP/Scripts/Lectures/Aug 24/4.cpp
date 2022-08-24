// WAP to find square and cube of a number using inline function.
#include <iostream>
using namespace std;

class calculation{
    public:
        inline  void square(float n){
            cout << "Square of number: " << n*n << endl;
        }
        inline void cube(float n){
            cout << "Cube of number: " << n*n*n << endl;
        }
};

int main(){
    calculation c;
    c.square(5);
    c.cube(5);

    return 0;
}