#include <stdio.h>

int oddevenfact(int n)
{
    int product=1, b;
    for(int i=0;i<n;i++)
        product*=(i+1);
    printf("Factorial: %d\n", product);
    if(product%2==0)
        printf("Factorial is even.");
    else
    printf("Factorial is odd.");
}

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    oddevenfact(a);
}