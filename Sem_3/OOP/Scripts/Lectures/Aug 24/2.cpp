//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include<iostream>
using namespace std;

class arth{
    public:
        int volume(int l,int b, int h){
            return(l*b*h);
        }
        float volume(float r){
            return((4/3)*3.14*r*r*r);
        }
        float volume(float br,float ch){
            return(3.14*br*br*ch);
        }
};

int main(){
    arth a;
    int l,b,h;
    float r,br,ch;
    cout << "Enter length and breadth and height of cuboid:";
    cin >> l >> b >> h;
    cout << "Enter radius of sphere:";
    cin >> r;
    cout << "Enter radius and height of cylinder:";
    cin >> br >> ch;
    cout << "\nVolume of cuboid is: " << a.volume(l,b,h);
    cout << "\nVolume of sphere is: " << a.volume(r);
    cout << "\nVolume of cylinder is: " << a.volume(br,ch);
}
