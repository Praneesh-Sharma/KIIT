//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include <iostream>
using namespace std;

class Area{
    private:
        int r, m, n, b, h;
    public:
        void getDetailsCircle(){
            cout << "Enter radius of circle: ";
            cin >> r;
        }
        void getDetailsRect(){
            cout << "Enter lenght of rectangle: ";
            cin >> m;
            cout << "Enter breadth of rectangle: ";
            cin >> n;
        }
        void getDetailsTri(){
            cout << "Enter base of traingle: ";
            cin >> b;
            cout << "Enter height of rectangle: ";
            cin >> h;
        }
        int circleArea(){
            return 3.14*r*r;
        }
        int rectArea(){
            return m*n;
        }
        int triArea(){
            return 0.5*b*h;
        }
};

int main(){
    Area a;
    int ch;
    cout << "\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\nEnter your choice: ";
    cin >> ch;
    cout << endl;
    
    switch(ch){
        case 1:
        a.getDetailsCircle();
        cout << "Area of circle: " << a.circleArea();
        break;
        case 2:
        a.getDetailsRect();
        cout << "Area of reactangle: " << a.rectArea();
        break;
        case 3:
        a.getDetailsTri();
        cout << "Area of triangle: " << a.triArea();
        break;
        default:
        cout << "Invalid input.";
        break;
    }

    return 0;
}