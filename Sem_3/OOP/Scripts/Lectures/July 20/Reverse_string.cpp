#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    cout << "Reverse string: ";
    
    int x = a.length();
    for(int i=x-1; i>-1; i--)
    {
        cout << a[i];
    }

    return 0;
}