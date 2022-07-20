#include <iostream>
using namespace std;

int pow(int x, int y)
{
    int result=1;
    for(int i=0; i<y; i++){
        result*=x;
    }

    return result;
}

int main()
{
    int a,b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter coefficient: ";
    cin >> b;

    cout << "Result: " << pow(a,b);
    return 0;
}