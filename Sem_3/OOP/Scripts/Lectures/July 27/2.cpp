/*
WAP to input name, roll number and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks.
*/

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int marks[5];
    int totalMarks;
    int Percentage;
};

void TotalMarksAndPercentage(struct student s[], int numOfStudents)
{
    for(int i=0; i<numOfStudents; i++)
    {
        s[i].totalMarks = 0;
        for(int j=0; j<5; j++)
        {
            s[i].totalMarks += s[i].marks[j];
        }
        s[i].Percentage = s[i].totalMarks * 0.2;
    }
}

void StudentDetailsRollNumber(struct student s[], int numofStudents, int rollNumber)
{
    for(int i=0; i<numofStudents; i++)
    {
        if(s[i].roll == rollNumber)
        {
            cout << "Student's Name: " << s[i].name << endl;
            cout << "Student's Marks: ";
            for(int j=0; j<5; j++)
            {
                cout << s[i].marks[j] << " ";
            }
            cout << "\nStudent's Total Marks: " << s[i].totalMarks;
            cout << "\nStudent's Percentage: " << s[i].Percentage;
            cout << endl;
        }
    }
}

void StudentDetailsPercentage(struct student s[], int numOfStudents, int percentage1, int percentage2)
{
    for(int i=0; i<numOfStudents; i++)
    {
        if(s[i].Percentage > percentage2 && s[i].Percentage < percentage1)
        {
            cout << "Student's Name: " << s[i].name << endl;
            cout << "Student's Marks: ";
            for(int j=0; j<5; j++)
            {
                cout << s[i].marks[j] << " ";
            }
            cout << "\nStudent's Total Marks: " << s[i].totalMarks;
            cout << "\nStudent's Percentage: " << s[i].Percentage;
            cout << endl;
        }
    }
}

void SortArrayMarksAscendingOrder(struct student s[], int numOfStudents)
{
    for(int i=0; i<numOfStudents-1; i++){
        for(int j=0; j<numOfStudents-i-1; j++){
            if(s[j].totalMarks > s[j+1].totalMarks)
            {
                struct student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i=0; i<numOfStudents; i++){
        cout << "Student's Name: " << s[i].name << endl;
        cout << "Student's Marks: ";
            for(int j=0; j<5; j++)
            {
                cout << s[i].marks[j] << " ";
            }
        cout << "\nStudent's Total Marks: " << s[i].totalMarks;
        cout << "\nStudent's Percentage: " << s[i].Percentage;
        cout << endl;
    }
}

int main()
{
    student s[100];
    int numOfStudents;

    int rollNumber;
    float percentage1, percentage2;

    cout << "Enter number of students: ";
    cin >> numOfStudents;

    for(int i=0; i<numOfStudents; i++)
    {
        cout << endl;
        cout << "Enter Name of Student " << i+1 << ": ";
        cin >> s[i].name;

        cout << "Enter Roll Number of Student " << i+1 << ": ";
        cin >> s[i].roll;

        for(int y=0; y<5; y++)
        {
            cout << "Enter marks of subject " << y+1 << ": ";
            cin >> s[i].marks[y]; 
        }
    }
    cout << endl;

    TotalMarksAndPercentage(s, numOfStudents);

    cout << "Enter wanted Roll Number: ";
    cin >> rollNumber;
    StudentDetailsRollNumber(s, numOfStudents, rollNumber);

    cout << "\nEnter Maximum percentage: ";
    cin >> percentage1;
    cout << "Enter Minimum percentage: ";
    cin >> percentage2;
    StudentDetailsPercentage(s, numOfStudents, percentage1, percentage2);

    cout << "\nArray sorted in Ascending Order of Marks: " << endl;
    SortArrayMarksAscendingOrder(s, numOfStudents);

    return 0;
}