//overloading new operator
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        int age;
    public:
        Student(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll: ";
            cin >> roll;
            cout << "Enter age: ";
            cin >> age;
        }
        ~Student(){}
        void * operator new(size_t num){
            void *ptr = malloc(num);
            cout << "pointer initialised" << endl;
            return ptr;
        }
        void display(){
            cout << endl << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Age: " << age << endl;
        }
        void operator delete(void * ptr){
            free(ptr);
            cout << "pointer freed" << endl;
        }
};

int main(){
    Student * s = new Student();
    s->display();
    delete s;

    return 0;
}