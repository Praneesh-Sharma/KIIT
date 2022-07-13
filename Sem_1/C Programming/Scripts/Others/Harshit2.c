#include <stdio.h>

int main()
{
    int b, i;
    printf("Enter how many numbers: ");
    scanf("%d", &b);
    int a[b];
    for(i=0;i<b;i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    if(a[b-1]>a[0])
    {
        printf("Elements in even indexes: \t");
        for(i=0;i<b;i=i+2)
        {
            printf("%d", a[i]);
        }
    }
    else
    {
        printf("Elements in odd indexes: \t");
        {
            for(i=1;i<b;i=i+2)
            {
                printf("%d", a[i]);
            }
        }
    }
}