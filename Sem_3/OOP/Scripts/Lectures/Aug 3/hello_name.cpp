#include <iostream>
#include <string>
using namespace std;

class Name{
    private:
        string name;
    public:
        void getName(){
            cout << "Enter your name: ";
            getline(cin, name);
        }
        void output(){
            cout << "Hello " << name;
        }
};

int main()
{
    Name n;
    n.getName();
    n.output();

    return 0;
}