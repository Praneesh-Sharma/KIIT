#include <stdio.h>

int divsum(int h[6])
{
    int x[3], y[3], j[3], i, sum=0, sum1=0, sum2=0;
    for(i=0;i<3;i++)
    {
        x[i]=h[i];
        y[i]=h[i+3];
    }
    
    printf("Array 1: ");
    for(i=0;i<3;i++)
        printf("%d ", x[i]);
    printf("\nArray 2: ");
    for(i=0;i<3;i++)
        printf("%d ", y[i]);
    printf("\nSum of arrays: ");
    for(i=0;i<3;i++)
    {
        sum=x[i]+y[i];
        printf("%d ", sum);
        sum=0;
    }
    for(i=0;i<3;i++)
    {
        sum1+=x[i];
        sum2+=y[i];
    }
    printf("\nSum of array 1: %d", sum1);
    printf("\nSum of array 2: %d", sum2);
}

int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d ", &a[i]);
    }
    divsum(a);
}