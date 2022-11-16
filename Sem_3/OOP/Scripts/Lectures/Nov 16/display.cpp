//WAP to display content of a file using character output function
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char name[30];
    int roll;
    ifstream inf("demo.txt");

    inf >> name;
    inf >> roll;

    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;

    inf.close();
    return 0;
}