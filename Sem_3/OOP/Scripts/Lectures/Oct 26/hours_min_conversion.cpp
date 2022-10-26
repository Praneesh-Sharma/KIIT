//hours to minutes conversion
#include <iostream>
using namespace std;

class hours{
    int h;
    public:
        hours(){}
        hours(int x){
            h =  x;
        }
        void showA(){
            cout << "Hours = " << h << endl;
        }
        int get(){
            return(h*60);
        }
};

class mins{
    int m;
    public:
        mins(){}
        mins(int x){
            m = x;
        }
        void showB(){
            cout << "Minutes = " << m << endl;
        }
        void operator = (hours z){
            m = z.get();
        }
};


int main(){
    int val;
    cout << "Enter number of hours: ";
    cin >> val;
    hours h1(val);
    mins m1;
    m1 = h1;
    m1.showB();
    return 0;
}