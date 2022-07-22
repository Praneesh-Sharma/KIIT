// odd even using the bitwise XOR operator
#include <iostream>
using namespace std;

void oddEven(int n)
{
    if(n^1 == n+1)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

    oddEven(x);
    return 0;
}