#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    char gender[5];
    int marks;
};

int main()
{
    int m, n, i;
    char nn;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student e[n];

    for(i=0;i<n;i++)
    {
        printf("Enter rollno. name gender and marks of student %d: ", i+1);
        scanf("%d %s %s %d", &e[i].rollno, e[i].name, e[i].gender, e[i].marks);
    }

    printf("Enter roll no.: ");
    scanf("%d", &m);
    printf("Enter new name: ");
    scanf("%s", nn);

    for(i=0;i<n;i++)
    {
        if(e[i].rollno==m)
            e[i].name=nn;
    }
}