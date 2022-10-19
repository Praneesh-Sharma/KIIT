//-Add an object to an integer, where the integer should be added to the inches value ( D2=4+D1)
#include <iostream>
using namespace std;

class Addition{
    private:
        int feet;
        int inches;
    public:
        void input(){
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        Addition operator +(int num){
            Addition temp;
            temp.feet = feet + num;
            temp.inches = inches + num;
            return temp;
        }
        void show(){
            cout << "Feet: " << feet << endl;
            cout << "Inches: " << inches << endl;
        }
};

int main(){
    Addition A, C;
    A.input();
    C = A + 4;
    C.show();
    return 0;
}