//WAP to write 10 strings into a file and display them from file.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char data[30];
    ofstream outf("Multiple_Input.txt");
    for(int i=0; i<5; i++){
        cout << "Enter data: ";
        cin >> data;
        outf << data << "\n";
    }
    outf.close();

    ifstream inf("Multiple_Input.txt");
    for(int i=0; i<5; i++){
        inf >> data;
        cout << "Data " << i+1 << ": " << data << endl;
    }
    inf.close();

    return 0;
}