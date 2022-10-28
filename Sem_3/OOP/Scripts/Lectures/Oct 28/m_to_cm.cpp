//meters to centimeters conversion
#include <iostream>
using namespace std;

class Metres{
    int m;
    public:
        Metres(){}
        Metres(int x){
            m = x;
        }
        int get(){
            return(m*100);
        }
};

class centi{
    int c;
    public:
        centi(){}
        void showB(){
            cout << "Centimetres = " << c << endl;
        }
        void operator =(Metres z){
            c = z.get();
        }
};

int main(){
    int val;
    cout << "Enter metres: ";
    cin >> val;
    Metres M(val);
    centi C;
    C = M;
    C.showB();
    return 0;
}