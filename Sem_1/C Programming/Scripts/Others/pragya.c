#include <stdio.h>

int func(int h)
{
    int a, b, c=0, i, z;
    int x=a;
    while(h!=0)
    {
        ++c;
        h/=10;  
    }
    int d=c;
    int j[c];
    while(a!=0)
    {
        j[--c]=a%10;
        a/=10;
    }

    z=j[0];

    for(i=1;i<d-1;i++)
    {
        if(j[i]==((j[i+1]+j[i-1]) || (j[i+1]-j[i-1]) || (j[i+1]*j[i-1]) || (j[i+1]/j[i-1]) || (j[i+1]%j[i-1])))
        {
            continue;
        }
        else
        z=(z*10)+j[i];
    }

    z=(z*10)+j[c];
    return z;
}

int main()
{
    int p, q;
    printf("Enter number: ");
    scanf("%d", &p);
    q=func(p);
    printf("New number: %d",q);
}