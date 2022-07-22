// odd even using the multiplication division method
#include <iostream>
using namespace std;

void oddEven(int n)
{
    int a=(n/2)*2;

    if(a == n)
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