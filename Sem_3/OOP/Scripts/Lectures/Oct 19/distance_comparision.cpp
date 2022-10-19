/*WAP to add two objects of Distance class. Overload the operator ‘>’ to compare two objects and return the object with larger time value and display it. Overload the ‘==’
operator to compare and display whether two given objects contain same Distance value*/
#include <iostream>
using namespace std;

class Distance{
    private:
        int value;
    public:
        void input(){
            cout << "Enter Distance: ";
            cin >> value;
        }
        Distance operator >(Distance test){
            Distance temp;
            if(value > test.value)
                temp.value = value;
            else
                temp.value = test.value;
            return temp;
        }
        void display(){
            cout << "Greater value: " << value << endl;
        }
};

int main(){
    Distance a,b, c;
    a.input();
    b.input();
    c = a>b;
    c.display();
    return 0;
}