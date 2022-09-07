//WAP to find the reverse of a number.
#include <stdio.h>

int main(){
    int n, i=0, m[100], o;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n>0){
        o = n%10;
        m[i] = o;
        n /= 10;
        i++;
    }
    printf("Reversed number: ");
    for(int j=0; j<i; j++){
        printf("%d", m[j]);
    }
    return 0;
}