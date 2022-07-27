/*
WAP to enter id, name, age and basic salary of n number of employees. Calculate the
gross salary of all the employees and display it along with all other details in a tabular
form, using pointer to structure.
[ Gross salary= Basic salary + DA + HRA,
DA = 80% of Basic salary
HRA=10% of Basic salary ]
*/
#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    int age;
    int basicSalary;
    float grossSalary;
};

void grossSalaryCalc(struct Employee e[], int numOfEmployees)
{
    for(int i=0; i<numOfEmployees; i++)
    {
        e[i].grossSalary = e[i].basicSalary + (e[i].basicSalary * 0.9);
    }
}

void displayDetails(struct Employee e[], int numOfEmployees)
{
    for(int i=0; i<numOfEmployees; i++)
    {
        cout << "\nDetails of Employee " << i+1 << ": " << endl;
        cout << "iD: " << e[i].id << endl;
        cout << "Name: " << e[i].name << endl;
        cout << "Age: " << e[i].age << endl;
        cout << "Basic Salary: " << e[i].basicSalary << endl;
        cout << "Gross Salary: " << e[i].grossSalary << endl;
    }
}

int main()
{
    Employee e[100];
    int numOfEmployees;

    cout << "Enter Number of Employees: ";
    cin >> numOfEmployees;

    cout << endl;

    for(int i=0; i<numOfEmployees; i++)
    {   
        cout << "Entering Details of Employee " << i+1 << ": " << endl;
        cout << "Enter Employee iD: ";
        cin >> e[i].id;
        cout << "Enter Employee's name: ";
        cin >> e[i].name;
        cout << "Enter employee's age: ";
        cin >> e[i].age;
        cout << "Enter employee's basic salary: ";
        cin >> e[i].basicSalary;
        cout << endl;
    }

    grossSalaryCalc(e, numOfEmployees);

    displayDetails(e, numOfEmployees);

    return 0;
}