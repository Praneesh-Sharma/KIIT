/*Create a class which stores time in hh:mm format. Include all the constructors. The
parameterized constructor should initialize the minute value to zero, if it is not
provided.*/
#include <iostream>
using namespace std;

class time{
    private:
        int hour, min;
    public:
        time(){
        }
        time(int a){
            hour = a;
            min = 00;
        }
        time(int a, int b){      //inline parameterized comstructor defined
            hour = a;
            min = b;
        }
        ~time(){
        }
        friend void display(time);
};

void display(time t){
    cout << "Time: " << t.hour << ":" << t.min << endl;
}

int main(){
    time A(5,6);
    time B(2);
    time C;

    display(A);
    display(B);
    display(C);
    return 0;
}