#include <stdio.h>

int main()
{
    int a, b, i, j, sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
        printf("Enter element [%d][%d]", i+1, j+1);
        scanf("%d", &arr[i][j]);
        if(i==j)
        {
            sum+=arr[i][j];
        }
    }
    printf("Sum of diagonal elements: %d", sum);
}