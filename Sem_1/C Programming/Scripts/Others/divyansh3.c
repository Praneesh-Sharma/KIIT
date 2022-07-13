#include <stdio.h>
#include <string.h>

struct info{
    int roll_no;
    char name[20];
    char gender[7];
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int average;
    char grade[1];
};

int main(){
    int n, i, t, score;
    char gender[1];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter total marks: ");
    scanf("%d", &t);
    struct info student[n];

    for(i=0;i<n;i++){
        printf("Enter student name, roll number and gender(M/F) of student %d: ", i+1);
        scanf("%s %d %s", &student[i].name, &student[i].roll_no, &gender);
        if(gender=="M"){
            strcpy(student[i].gender, "Male");
        }
        if(gender=="F"){
            strcpy(student[i].gender, "Female");
        }
        printf("Enter marks of all subjects: ");
        scanf("%d %d %d %d %d", &student[i].marks1, &student[i].marks2, &student[i].marks3, &student[i].marks4, &student[i].marks5);
        student[i].average = (student[i].marks1 + student[i].marks2 + student[i].marks3 + student[i].marks4 + student[i].marks5)/5;
        score = (student[i].average*5)*100/t;
        if(score>90){
            strcpy(student[i].grade, "O");
        }
        if(score>80){
            strcpy(student[i].grade, "E");
        }
        if(score>70){
            strcpy(student[i].grade, "A");
        }
        if(score>60){
            strcpy(student[i].grade, "B");
        }
        if(score>50){
            strcpy(student[i].grade, "C");
        }
        if(score<50){
            strcpy(student[i].grade, "F");
        }
    }

    for(i=0;i<n;i++){
        printf("\nName: %s, Roll Number: %d, Gender: %c", student[i].name, student[i].roll_no, student[i].gender);
        printf("\nMarks: %d %d %d %d %d, Average: %d, Grade: %s", student[i].marks1, student[i].marks2, student[i].marks3, student[i].marks4, student[i].marks5, student[i].average, student[i].grade);
        printf("\n-------------------------------------------");
    }

    return 0;
}