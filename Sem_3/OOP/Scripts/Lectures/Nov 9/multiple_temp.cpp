//WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return a+b;
}
int main(){
    cout << "Integer: " << add<int>(2, 3) << endl;
    cout << "Float: " << add<float>(2.5, 3.5) << endl;
    cout << "String: " << add<string>("Hello", " World") << endl;
    return 0;
}