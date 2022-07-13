#include <stdio.h>
#include <conio.h>

int main()
{
    int a, cons=0, vowel=0, c=0;
    char s[20];
    printf("1. Number of Vowels\n");
    printf("2. Number of Consonants.\n");
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter word: ");
    scanf("%s", s);
    
    while (s[c] != '\0')
    {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      vowel++;
    else
        cons++;
    c++;
    }

    if(a==1)
        printf("Number of vowels: %d", vowel);
    else if(a==2)
        printf("Number of consonants: %d", cons);

    return 0;
}