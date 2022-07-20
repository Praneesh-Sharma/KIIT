#include <iostream>
using namespace std;

int factorial(int a)
{
    if(a>1)
        return a * factorial(a-1);
    else    
        return 1;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Factorial: " << factorial(x) << endl;

    return 0;
}