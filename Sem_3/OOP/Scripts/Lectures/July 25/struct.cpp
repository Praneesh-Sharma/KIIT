#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    student s;
    cout << "Enter student's name: ";
    cin >> s.name;
    cout << "Enter student's roll: ";
    cin >> s.roll;
    cout << "Enter student's marks: ";
    cin >> s.marks;

    cout << "The student's information: " << endl;
    cout << s.name << setw(7) << s.roll << setw(9) << s.marks;
}