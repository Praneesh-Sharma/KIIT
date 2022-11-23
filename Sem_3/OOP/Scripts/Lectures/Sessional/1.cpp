/*1-WAP to enter the vehicle number from key board on the following conditions
 The first two characters are combination of alphabets(A to Z) except the
combination IN.
 Next four are combination of digits(0 to 9) except the combination 0000.
If the input deviates from any of the constraints than handle with proper exceptions.*/
#include <iostream>
using namespace std;

void numplate(){
    char arr2[2];
    int x, y=0, arr1[4];
    static int x1,x2;

    try{

        cin >> arr2[0];
        cin >> arr2[1];
        cin >> arr1[0];
        cin >> arr1[1];
        cin >> arr1[2];
        cin >> arr1[3];
        
        if(arr2[0]== 'I' && arr2[1] == 'N'){
            throw 'x';
        }
        else if(arr1[0]==0 && arr1[1]==0 && arr1[2]==0 && arr1[3]==0){
            throw x;
        }
    }
    catch(char x){
        cout << "Invalid due to condition 1" << endl;
        y++;
    }
    catch(int x){
        cout << "Invalid due to condition 2" << endl;
        y++;
    }

    if(y==0){
        for(int i=0;i<2;i++){
            cout << arr2[i];
        }
        for(int i=0;i<4;i++){
            cout << arr1[i];
        }
    }
}

int main(){
    numplate();
    return 0;
}