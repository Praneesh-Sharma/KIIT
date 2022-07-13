#include <stdio.h>
int main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);

    if(a>=48 && a<=57)
        printf("The entered character %c is a digit.",a);
    else if((a==97)||(a==101)||(a==105)||(a==111)||(a==117)||(a==65)||(a==69)||(a==73)||(a==79)||(a==85))
        printf("The entered character %c is a vowel.",a);
    else
        printf("The entered character %c is a consonant.",a);
    return 0;
}