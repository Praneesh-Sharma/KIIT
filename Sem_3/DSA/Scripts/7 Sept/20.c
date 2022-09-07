//WAP to convert binary number into decimal number and vice versa.
#include <stdio.h>
#include <math.h>

void DecToBin(int n){
    int m[50], i=0;
    while(n>0){
        m[i] = n%2;
        n = n/2;
        i++;
    }
    printf("Binary form: ");
    for(int j=i-1; j>=0; j--){
        printf("%d", m[j]);
    }
}

void BinToDec(long long n){
    int dec = 0, i=0, rem;
    while(n!=0){
        rem = n%10;
        n /= 10;
        dec += rem* pow(2,i);
        i++;
    }
    printf("Decimal form: %d", dec);
}

int main(){
    int n=25;
    long long m=1101;
    DecToBin(n);
    printf("\n");
    BinToDec(m);

    return 0;
}