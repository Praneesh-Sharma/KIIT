//User input

#include <iostream>
#include <cmath>         //math library(not used in this script)
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);                    //getline gets the entire line of input
    cout << "You are " << name;

    int age;
    cout << "\nEnter your age: ";
    cin >> age;
    cout << "You are " << age << " years old.";



    return 0;
}