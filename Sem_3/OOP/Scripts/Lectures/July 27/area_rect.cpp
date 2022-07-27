#include <iostream>
using namespace std;

class area
{
    private:
        float l, b;
    public:
        void input();
        float calc();
};

void area::input()
{
    cout << "Enter lenght of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
}

float area::calc()
{
    return l*b;
}

int main()
{
    area a;
    float input, output;
    a.input();
    output = a.calc();
    cout << "Area of rectangle: " << output;

    return 0;
}