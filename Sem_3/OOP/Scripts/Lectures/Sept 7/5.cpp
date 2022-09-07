//WAP to count number of objects created from a class using concept of static data members and static member function.
#include <iostream>
using namespace std;

class demo{
    private:
        static int count;
    public:
        demo(){
            cout << "Constructor called" << endl;
            count++;
        }
        static int Count(){
            return count;
        }
};

int demo::count;

int main(){
    demo object_1, object_2, object_3;
    int c;
    c = demo::Count();
    cout << "Number of objects: " << c << endl;
}