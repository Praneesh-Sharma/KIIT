#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
    char grade[1];
};

int main()
{
    struct student s[100];
    int numOfStudents;

    printf("Enter number of students: ");
    scanf("%d", &numOfStudents);

    for(int i=0; i<numOfStudents; i++){
        fflush(stdin);
        printf("\n\nEnter details of Student %d", i+1);
        printf("\nEnter name: ");
        gets(s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        int total = 0;
        for(int j=0; j<5; j++){
            printf("Enter marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }
        
        s[i].total = total;

        if(total > 450)
            strcpy(s[i].grade, "O");
        else if(total > 400)
            strcpy(s[i].grade, "E");
        else if(total > 350)
            strcpy(s[i].grade, "A");
        else if(total > 300)
            strcpy(s[i].grade, "B");
        else
            strcpy(s[i].grade, "F");
    }

    for(int i=0; i<numOfStudents-1; i++){
        for(int j=0; j<numOfStudents-i-1; j++){
            if(s[j].total > s[j+1].total){
                struct student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("\n\nArray sorted by total marks in ascending order");

    for(int i=0; i<numOfStudents; i++){
        printf("\n\nDetails of student %d", i+1);
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].rollno);
        printf("\nMarks:");
        for(int j=0; j<5; j++)
            printf(" %d", s[i].marks[j]);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nGrade: %s", s[i].grade);
    }

    return 0;
}