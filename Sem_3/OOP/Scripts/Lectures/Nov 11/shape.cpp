//Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.
#include <iostream>
using namespace std;

class shape{
    protected:
        int side, breadth, radius, base, height;
    public:
        virtual void show(){}
};

class circle: public shape{
    float area;
    public:
        circle(){
            cout << endl << "Enter radius: ";
            cin >> radius;
            area = 3.14*radius*radius;
        }
        void show(){
            cout << "Area of circle: " << area << endl;
        }
};

class square: public shape{
    float area;
    public:
        square(){
            cout << endl << "Enter side of square: ";
            cin >> side;
            area = side*side;
        }
        void show(){
            cout << "Area of square: " << area << endl;
        }
};

class triangle: public shape{
    float area;
    public:
        triangle(){
            cout << endl << "Enter base and height of triangle: ";
            cin >> base >> height;
            area = base * height;
        }
        void show(){
            cout << "Area of trianlge: " << area << endl;
        }
};

int main(){
    shape *s;

    circle c; 
    s = &c;
    s->show(); 

    square r;
    s = &r;
    s->show();

    triangle t;
    s = &t;
    s->show();


    return 0;
}