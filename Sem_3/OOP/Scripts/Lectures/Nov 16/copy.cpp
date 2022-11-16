//WAP to copy content of one file to another.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char name[30];
    int roll;

    ifstream inf("demo.txt");
    inf >> name;
    inf >> roll;
    inf.close();

    ofstream outf("demo2.txt");
    outf << name << "\n";
    outf << roll << "\n";
    outf.close();

    return 0;
}