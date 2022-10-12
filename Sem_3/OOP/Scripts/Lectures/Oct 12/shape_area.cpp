/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
Include the relevant data members and functions in all the classes. Find the area of each
shape and display it.
*/
#include <iostream>
using namespace std;

class Shape{
    protected:
        int radius;
        int base;
        int height;
        int lenght;
        int breadth;
    public:
        Shape(){
            radius = 0;
            base = 0;
            height = 0;
            lenght = 0;
            breadth = 0;
        }
        ~Shape(){}
};

class Circle: public Shape{
    protected:
        int area_cir;
    public:
        Circle(){
            cout << "Enter radius of circle: ";
            cin >> radius;
            area_cir = 3.14 * radius * radius;
        }
        ~Circle(){}
};

class Triangle: public Shape{
    protected:
        int area_tri;
    public:
        Triangle(){
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;
            area_tri = 0.5 * base * height;
        }
        ~Triangle(){}
};

class Rectangle: public Shape{
    protected:
        int area_rect;
    public:
        Rectangle(){
            cout << "Enter length of rectangle: ";
            cin >> lenght;
            cout << "Enter breadth of resctangle: ";
            cin >> breadth;
            area_rect = lenght * breadth;
        }
        ~Rectangle(){}
};

class Area: public Circle, public Triangle, public Rectangle{
    public:
        void showDetails(){
            cout << "Area of Circle: " << area_cir << endl;
            cout << "Area of Triangle: " << area_tri << endl;
            cout << "Area of Rectangle: " << area_rect << endl;
        }
};

int main(){
    Area A;
    A.showDetails();

    return 0;
}