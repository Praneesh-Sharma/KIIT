/*i. Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.
ii. Extend the program ii. to derive a class from result from classs ‘test’ which includes
member function to calculate total marks and percentage of a student. Input the data for a
student and display its total marks and percentage.
iii. Extend the program ii. to include a class sports, which stores the marks in sports activity.
Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and
percentage of a student.*/

#include <iostream>
#include <string>
using namespace std;

class student{
    protected:
        string name;
        int rollno;
        int age;
    public:
        student(){
           cout << "Enter name: ";
           getline(cin, name);
           cout << "Enter roll number of student: ";
           cin >> rollno;
           cout << "Enter age: ";
           cin >> age; 
        }
        ~student(){}
};

class sports{
    protected:
        int marks_sports;
    public:
        sports(){
            cout << "Enter sports marks: ";
            cin >> marks_sports;
        }
        ~sports(){}
};

class test: public student{
    protected:
        int marks[5];
    public:
        test(){
            for(int i=0;i<5;i++){
                cout << "Enter marks in subject " << i+1 << ": ";
                cin >> marks[i];
            }
        }
        ~test(){}
        void showDetails(){
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollno << endl;
            cout << "Age: " << age << endl;
            for(int i=0;i<5;i++){
                cout << "Marks of subject " << i+1 << ": " << marks[i] << endl;
            }
        }
};

class result: public test, public sports{
    protected:
        int total;
        int percentage;
    public:
        result(){
            total=0;
            percentage=0;
        }
        ~result(){}
        void report(){
            for(int i=0;i<5;i++){
                total+= marks[i];
            }
            total += marks_sports;
            percentage = total/6;
        }
        void showReport(){
            cout << "Total marks: " << total << endl;
            cout << "Percentage: " << percentage << endl;
        }
};

int main(){
    result r1;
    r1.report();
    r1.showDetails();
    r1.showReport();

    return 0;
}