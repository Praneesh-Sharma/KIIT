#include <stdio.h>

int main()
{
    char num=130;
    num=num+1;
    printf("%d",(unsigned char)num);
    num=130;
    printf("%d",(char)(num+1));
}