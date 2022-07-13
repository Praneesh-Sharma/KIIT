//Object functions

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, int aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >=3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Jim", "Business", 3.7);
    Student student2("Pam", "Art", 1.7);

    cout << student2.hasHonors();

    return 0;
}