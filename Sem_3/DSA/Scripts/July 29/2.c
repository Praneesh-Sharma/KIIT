#include <stdio.h>
#include <string.h>

struct RailDetails
{
    char name[50];
    struct RailTIme{
        int hours;
        int minutes;
        int seconds;
    };
};

int main()
{
    struct RailDetails r[5];
    char t[2];

    for(int i=0; i<2; i++){
        fflush(stdin);
        printf("\nEnter details of Train %d", i+1);
        printf("\nEnter the name of train: ");
        gets(r[i].name);
        printf("Enter time of arrival(hours): ");
        scanf("%d", &r[i].hours);
        printf("Enter time of arrival(minutes): ");
        scanf("%d", &r[i].minutes);
        printf("Enter time of arrival(seconds): ");
        scanf("%d", &r[i].seconds);
        printf("Enter AM or PM: ");
        scanf("%s", &t);
        
        if((strcmp(t,"PM")==0) || (strcmp(t, "pm")==0))
            r[i].hours = r[i].hours + 12;
        
        if(r[i].hours == 24)
            r[i].hours = 0;
    }

    printf("\nTRAIN DETAILS: ");
    for(int i=0; i<2; i++){
        printf("\n %s will arrive on %d:%d:%d", r[i].name, r[i].hours, r[i].minutes, r[i].seconds);
    }

    return 0;
}