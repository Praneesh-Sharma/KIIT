//WAP to overload following operators for class distance, which stores the distance in feet and inches.
#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        int inches;
    public:
        void input(){
            cout << "Enter distance in feet: ";
            cin >> feet;
            cout << "Enter distance in inches: ";
            cin >> inches;
        }
        Distance operator +(Distance test){
            Distance temp;
            temp.feet = feet + test.feet;
            temp.inches = inches + test.inches;
            return temp;
        }
        void show(){
            cout << "Feet: " << feet << endl;
            cout << "Inches: " << inches << endl;
        }
};

int main(){
    Distance a,b,c;
    a.input();
    b.input();
    c = a+b;
    c.show();

    return 0;
}