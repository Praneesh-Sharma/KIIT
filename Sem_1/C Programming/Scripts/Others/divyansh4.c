#include <stdio.h>

int cmpDate(int day1, int mon1, int year1, int day2, int mon2, int year2)
{
    if(year1 > year2)
    {
        printf("%d", -1);
    }
    
    else if (year1 < year2)
    {
        printf("%d", 1);
    }
    
    else
    {
        if(mon1 == mon2)
        {
           if(day1 == day2)
           {
               printf("%d", 0);
           }
           else if(day1 > day2)
           {
               printf("%d", -1);
           }
           else
            {
                printf("%d", 1);
            }
        }
        else if(mon1 > mon2)
        {
            printf("%d", -1);
        }
        else 
        {
            printf("%d", 1);
        }
    }
}

int Isvalid(int date, int month, int year);

int main()
{
    int day1, mon1, year1;
    int day2, mon2, year2;
    int is_leap = 0, is_valid = 1;
    
    printf("Enter first date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon1, &day1, &year1);

    printf("Enter second date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon2, &day2, &year2);
    
    if(!Isvalid(day1, mon1, year1))
    {
        printf("First date is invalid.\n"); 
    }
    
    else if(!Isvalid(day2, mon2, year2))
    {
        printf("Second date is invalid.\n");
    }

    else
    {
        cmpDate(day1, mon1, year1, day2, mon2, year2);
    }
    return 0;
}

int Isvalid(int day, int mon, int year)
{
    int is_valid = 1, is_leap = 0;
    
    if(year <= 9999)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            is_leap = 1;
        }
        
        if(mon >= 1 && mon <= 12)
        {
            if (mon == 2)
            {
                if (is_leap && day == 29) 
                {
                    is_valid = 1;
                }
                else if(day > 28) 
                {
                    is_valid = 0;
                }
            }

            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) 
            {
                if (day > 30)
                {
                    is_valid = 0;
                }
            }

            else if(day > 31)
            {            
                is_valid = 0;
            }        
        }
        
        else
        {
            is_valid = 0;
        }
    }
    else
    {
        is_valid = 0;
    }
    
    return is_valid;
}

