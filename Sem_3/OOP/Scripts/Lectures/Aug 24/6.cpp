//WAP to increment the value of an argument given to function.
#include <iostream>
using namespace std;

class inc{
    public:
        inline void increment(int m){
            cout << "Output: " << m;
        }
};
int main(){
    inc i;
    int n;
    cout << "Enter number: ";
    cin >> n;
    i.increment(++n);

    return 0;
}