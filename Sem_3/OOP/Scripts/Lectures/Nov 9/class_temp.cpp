//Rewrite program i. using class template
#include <iostream>
using namespace std;

template<class T>
class A{
    public:
        void sort(T arr[]){
            for (int i = 0; i < 5; i++){
		        for (int j = i+1; j < 5; j++){
			        if (arr[i] > arr[j]){
				    T temp;
				    temp = arr[i];
				    arr[i] = arr[j];
				    arr[j] = temp;
			        }
		        }
	        }

            for(int i=0; i<5; i++){
                cout << "  " << arr[i];
            }
        }
};

int main(){
    int arr_int[5] = {5,2,9,1,7};
    float arr_float[5] = {1.5,4.6,2.3,5.5,3.1};

    A<int>obj1;
    obj1.sort(arr_int);
    cout << endl;
    A<float>obj2;
    obj2.sort(arr_float);
    return 0;
}