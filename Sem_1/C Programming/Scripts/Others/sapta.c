#include <stdio.h>
#include <string.h>

struct data{
    int roll_no;
    char name[20];
    int phy;
    int chem;
    int math;
};

int main(){
    int m, n, i;
    char a;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct data student[n];

    for(i=0;i<n;i++){
        printf("--------------------------------------------\n");
        printf("Enter roll number: ");
        scanf("%d", &student[i].roll_no);
        printf("Enter name: ");
        scanf("%s", student[i].name);
        printf("Enter marks of Physics, Chemistry and Maths: ");
        scanf("%d %d %d", &student[i].phy, &student[i].chem, &student[i].math);
    }

    printf("\n\nEnter roll number of student to be searched: ");
    scanf("%d", &m);
    
    int flag = 0, total, avg, num;
    for(i=0;i<n;i++){
        if(student[i].roll_no == m){
            flag = 1;
            num = i;
            total = student[i].phy + student[i].chem + student[i].math;
            avg = total/3;
            break;
        }
    }
    if(flag == 1){
        printf("\n\nName: %s\nRoll No.: %d\n", student[num].name, student[num].roll_no);
        printf("Marks in Physics: %d, Chemistry: %d and Maths: %d\n", student[num].phy, student[num].chem, student[num].math);
        printf("Total marks: %d\nAverage Marks: %d", total, avg);
    }
    else{
        printf("Roll number not found.");
    }
}
