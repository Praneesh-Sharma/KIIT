//WAP to demonstrate the order of call of constructors and destructors for a class.
#include <iostream>
using namespace std;

int count=1;

class areaRect{
    private:
        int length, breadth;
    public:
        areaRect(){
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }
        areaRect(int a){
            length = breadth = a;
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }
        areaRect(int a, int b){
            length = a;
            breadth = b;                        
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }
        ~areaRect(){
            cout << "destructor invoked" << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        };
};

int main(){
    areaRect(2,5);
    areaRect(4);
    areaRect();

    return 0;
}