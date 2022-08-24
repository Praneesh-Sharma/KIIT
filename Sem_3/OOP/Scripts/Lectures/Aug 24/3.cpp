/*WAP which displays a given character, n number of times, using a function. When the n
value is not provided, it should print the given character 80 times. When both the
character and n value is not provided, it should print ‘*’ character 80 times. */
#include <iostream>
using namespace std;

class character{
    public:
        void displayChar(char x = '*', int n = 80){
            for(int i=0; i<n; i++){
                cout << x;
            }
            cout << endl;
        }
};

int main(){
    character c;
    c.displayChar('%', 5);
    c.displayChar('&');
    c.displayChar();

    return 0;
}