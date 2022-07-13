#include <stdio.h>
#include <String.h>

int main()
{
    int l, i, j, c=0;
    char a[20];
    printf("Enter input: ");
    gets(a);
    l=strlen(a);

    for(i=0;i<l;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }

    for(i=l-1;i>-1;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
}