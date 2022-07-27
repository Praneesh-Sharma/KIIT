//WAP to input name, roll number and marks in 5 subjects for a student, and display it.

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int marks[5];
};

int main()
{
    student s;
    cout << "Entering Details" << endl;
    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.roll;

    for(int i=0; i<5; i++)
    {
        cout << "Enter marks of subject " << i+1 << ": ";
        cin >> s.marks[i];
    }

    cout << "Displaying Detials" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Marks of Subject" << i+1 << ": " << s.marks[i] << endl;
    }

    return 0;
}