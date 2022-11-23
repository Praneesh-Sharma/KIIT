/*1-WAP to enter the vehicle number from key board on the following conditions
 The first two characters are combination of alphabets(A to Z) except the
combination IN.
 Next four are combination of digits(0 to 9) except the combination 0000.
If the input deviates from any of the constraints than handle with proper exceptions.*/
#include <iostream>
using namespace std;

void numplate(){
    char c, arr2[2];
    int x, arr[4];
    static int x1,x2;

    try{
        cin >> c;
        arr2[0]=c;
        if(c== 'I'){throw 'x';}
        cin >> c;
        arr2[1]=c;
        if(c== 'I'){throw 'x';}
        cin >> x;
        arr[1]=x;
        if(c== 0){throw x;}
        cin >> x;
        arr[2]=x;
        if(c== 0){throw x;}
        cin >> x;
        arr[3]=x;
        if(c== 0){throw x;}
        cin >> x;
        arr[4]=x;
        if(c== 0){throw x;}
    }
    catch(char x){x1++;}
    catch(int x){x2++;}
    
    if(x1 == 2 || x2 == 4){
        cout << "Invalid Number Plate" << endl;
    }
    else{
        for(int i=0;i<2;i++){
            cout << arr2[i];
        }
        for(int i=0;i<4;i++){
            cout << arr[i];
        }
    }
}

int main(){
    numplate();
    return 0;
}