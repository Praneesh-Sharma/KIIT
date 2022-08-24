//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include <iostream>
using namespace std;

class Volume{
    private:

    public:
        void volumeSphere(float r){
            cout << "Volume of sphere: " << r*r*r << endl;
        }
        void volumeCylinder(float r, float h){
            cout << "Volume of cylinder: " << 3.14*r*r*h << endl;
        }
        void volumeCuboid(float l, float b, float h){
            cout << "Volume of cuboid: " << l*b*h << endl;
        }
};

int main(){
    Volume v;
    v.volumeSphere(10);
    v.volumeSphere(5.5);
    v.volumeCylinder(5,5);
    v.volumeCylinder(2.5,3.4);
    v.volumeCuboid(1,2,3);
    v.volumeCuboid(0.5,8.6,7.6);

    return 0;
}