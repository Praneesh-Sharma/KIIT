/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee*/
#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected:
        string name;
        int id;
        int salary;
    public:
        Employee(){
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter employee id: ";
            cin >> id;
            cout << "Enter salary of employee: ";
            cin >> salary;
        }
        ~Employee(){}
};

class regular: public Employee{
    protected:
        int DA;
        int HRA;
        int basic_sal;
    public:
        regular(){
            DA = 0.8 * salary;
            HRA =  0.1 * salary;
            basic_sal = salary;
        }
        ~regular(){}
        void show_basic(){
            cout << "Name: " << name << endl;
            cout << "Id: " << id << endl;
            cout << "DA: " << DA << endl;
            cout << "HRA: " << HRA << endl;
            cout << "Basic salary: " << salary << endl;
        }
};

class part_time: public regular{
    protected:
        int hours;
        int pay;
        int part_time_sal;
    public:
        part_time(){
            cout << "Enter pay per hour: ";
            cin >> pay;
            cout << "Enter number of hours: ";
            cin >> hours;
            part_time_sal = pay * hours;
        }
        ~part_time(){}
        void show_part(){
            cout << "Name: " << name << endl;
            cout << "Id: " << id << endl;
            cout << "Part time salary: " << part_time_sal << endl;
        }
};

int main(){
    part_time emp;
    emp.show_basic();
    emp.show_part();

    return 0;
}