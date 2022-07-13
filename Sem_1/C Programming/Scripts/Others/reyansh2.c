#include <stdio.h>

int main()
{
    int a, b, i, j, s1=0 ,s2=0;
    printf("Enter number of rows and coulumns: ");
    scanf("%d %d", &a, &b);
    int c[a][b];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter element [%d][%d]: ",i+1,j+1);
            scanf("%d", &c[i][j]);
        }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            s1+=c[i][j];
            s2+=c[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, s1);
        s1=0;
    }
    printf("Sum of all elements: %d", s2);
}