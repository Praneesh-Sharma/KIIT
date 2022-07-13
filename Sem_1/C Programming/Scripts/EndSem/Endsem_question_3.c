#include <stdio.h>
#include <stdlib.h>
 
typedef struct 
{
    char name[20];
    int age;
    char dob[100];
    
}player; 

int main()
{
    player details[7];
    
    printf("Enter the %d details below \n \n",7);
    for(int i=0; i<7; i++)
    {
        printf("Person %d:- \n",i+1);

        
        printf("Name: ");
        scanf("%s",details[i].name);

        printf("Age: ");
        scanf("%d",&details[i].age);

        printf("Date of birth: ");
        scanf("%s",details[i].dob);
        
        char ch = getchar();
 
        printf("\n");
    }
    
    printf("SL NO.\t Name\t Age\t DOB(DD/MM/YYYY)\n");
    for(int i=0; i<7; i++)
    {
        if(details[i].age>=24)
        {
            printf("%d\t",i+1);
            printf("%s\t",details[i].name);
            printf("%d\t",details[i].age);
            printf("%s\t",details[i].dob);
            printf("\n");
        }
    }

    return 0;
}