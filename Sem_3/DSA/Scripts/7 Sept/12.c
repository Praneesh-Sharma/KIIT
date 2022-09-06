//WAP to check whether the entered number is prime or not.
#include <stdio.h>

int main(){
    int n, flag=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i=2; i<=(n/2); i++){
        if(n%i==0)
            flag=1;
        else
            continue;
    }
    if(flag == 0)
        printf("Entered number is prime.");
    else
        printf("Entered number is not prime.");

    return 0;
}