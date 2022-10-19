// Create a class to store an integer array. Overload insertion and extraction operator to input and display the array elements.
#include <iostream>
using namespace std;

class Array{
    private:
        int arr[5];
        int i=0;
    public:
        void input(){
            cout << "Enter number: ";
            cin >> arr[i];
            i++;
        }
        Array operator <<(int num){
            arr[i] = num;
            i++;
            cout << "Inserted" << endl;
        }
        Array operator >>(int num){
            cout << "Element: " << arr[num] << endl;
        }
};

int main(){
    Array a;
    a.input();
    a << 10;
    a << 20;
    a >> 0;
    a >> 1;
    a >> 2;

    return 0;
}