#include <stdio.h>

int main()
{
    int a, b, c=0, i;
    printf("Enter number: ");
    scanf("%d", &a);
    b=a;
    while(a!=0)
    {
        ++c;
        a/=10;
    }
    int d=c;
    int j[c];
    while(b!=0)
    {
        j[--c]=b%10;
        b/=10;
    }

    if((j[d-2]%2==0) && (j[0]%2==0))
    {
        printf("The required absolute difference is %d.", j[0]-j[d-1]);
    }
    else
    {
        printf("As first digit and second last digit both are not even, so no absolute value required.");
    }
}