// odd even using bitwise AND operator
#include <iostream>
using namespace std;

void oddEven(int n)
{
    bool a = n & 1;

    if(!a)
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