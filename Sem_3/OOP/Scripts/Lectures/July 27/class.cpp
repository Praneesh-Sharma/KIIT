#include <iostream>
using namespace std;

class student
{
    private:
        int a;
    public:
        void show();
};

void student::show()
{
    a = 10;
    cout << "The value is " << a;
}

int main()
{
    student s;
    s.show();

    return 0;
}