/*Create a class which stores a sting and its length as data members. Include all the
constructors. Include a member function to join two strings and display the
concatenated string.*/
#include <iostream>
using namespace std;

class lenght{
    private:
        string s;
        int l;
    public:
        void getDetails(string str, int n){
            s = str;
            l = n;
        }
        void showDetails(){
            cout << "String: " << s << endl;
            cout << "Lenght: " << l << endl;
        }
        void strsum(string str1,string str2){
            cout << "Added string: " << str1 << str2 << endl;
        }
};

int main(){
    string str1 = "OOP_lab_4";
    string str2 = "Assignment";
    lenght l;
    l.getDetails(str1, str1.size());
    l.showDetails();
    l.getDetails(str2, str2.size());
    l.showDetails();
    l.strsum(str1, str2);

    return 0;
}