#include <stdio.h>

int func(int h)
{
    int x = h, c = 0, z, i;
    while(x != 0)
    {
        ++c;
        x /= 10;
    }
    int v = c;
    int j [c];
    while(h!= 0)
    {
        j[--c] = h % 10;
        h /= 10;
    }

    z=j[0];

    for(i=1;i<v-1;i++)
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
    int q;
    printf("Enter number: ");
    scanf("%d", &q);    
    printf("New Number: %d",func(q));
}