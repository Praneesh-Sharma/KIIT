//Inheritance
//WAP to demonstrate all types of inheritance.
#include<iostream>
using namespace std;

class A
{
    public:
        int a;
};

class B : public A
{
    public:
        int b;
};

class C : public A
{
    public:
        int c;
};

class D : public A
{
    public:
        int d;
};

class E : public B
{
    public:
        int e;
};

class F : public E
{
    public:
        int f;

    void show1()
    {
        cout << "Enter four numbers:" << endl;
        cin >> a >> b >> e >> f;
        cout << endl;
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "E = " << e << endl;
        cout << "F = " << f << endl;
    }
};

class G : public C
{
    public:
        int g;

    void show2()
    {
        cout << endl << "Enter two numbers:" << endl;
        cin >> c >> g;
        cout << endl << "C = " << c << endl;
        cout << "G = " << g << endl;
    }
};

class H: public G, public D
{
    public:
        int h;

    void show3()
    {
        cout << endl << "Enter three numbers:" << endl;
        cin >> g >> d >> h;

        cout << endl << "G = " << g << endl;
        cout << "D = " << d << endl;
        cout << "H = " << h << endl;
    }
};

int main()
{
    F f;
    G g;
    H h;

    f.show1();
    g.show2();
    h.show3();

    return 0;
}