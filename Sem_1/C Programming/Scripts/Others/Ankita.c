#include <stdio.h>
#include <string.h>

char rev(char arr[20])
{
    int i, l;
    l=strlen(arr);
    printf("ASCII Values: \n");
    for(i=0;i<l;i++)
    {
        if((arr[i]>=65) && (arr[i]<=90))
            printf("ASCII value of %c: %d\n", arr[i], arr[i]);
    }
}

int main()
{
    char a[20];
    printf("Enter string: ");
    gets(a);
    rev(a);
}