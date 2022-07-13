#include <stdio.h>

int main()
{
    enum color{Red,Orange,Yellow,Green,Blue,Indigo,Violet};

    enum color rainbow;
    int a=0;
    rainbow=color(a);
    printf("%s\n", rainbow);

    rainbow=color(a+4);
    printf("%s\n", rainbow);

    rainbow=color(a+6);
    printf("%s\n", rainbow);
}