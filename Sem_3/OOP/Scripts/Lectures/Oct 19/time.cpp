//WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects and display whether they are equal or not. Overload the assignment operator.
#include <iostream>
using namespace std;

class time{
    private:
        int hours;
        int min;
    public:
        void input(){
            cout << "Enter hours and min: ";
            cin >> hours >> min;
        }
        time operator ==(time test){
            if(hours == test.hours && min == test.min)
                cout << "Equal" << endl;
            else
                cout << "Not equal" << endl;
        }
        time operator =(time test){
            hours = test.hours;
            min = test.min;
        }
        void show(){
            cout << hours << " hours: " << min << " minutes" << endl;
        }
};

int main(){
    time a,b;
    a.input();
    b.input();
    a == b;
    cout << "Before: ";
    a.show();
    a = b;
    cout << "After: ";
    a.show();
    
    return 0;
}