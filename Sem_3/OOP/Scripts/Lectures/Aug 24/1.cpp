//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include <iostream>
using namespace std;

class area{
    public:
        void areaCircle(float r){
            cout << "Area of circle: " << r*r << endl;
        }
        void areaRect(float b, float h){
            cout << "Area of rectangle: " << b*h << endl;
        }
        void areaTriangle(float b, float h){
            cout << "Area of triangle: " << 0.5*b*h << endl;
        }
};

int main(){
    area a;
    a.areaCircle(10);
    a.areaCircle(2.5);
    a.areaRect(3,5);
    a.areaRect(5.5,6.8);
    a.areaTriangle(6,8);
    a.areaTriangle(5.6, 7.5);

    return 0;
}