#include <stdio.h>

void magic(int n){
    int magicSquare[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            magicSquare[i][j] = 0;

    int r = n-1;
    int c = n/2;

    for(int i=1; i<=(n*n);){
        
        magicSquare[r][c] = i++;
        int nextR=r+1;
        int nextC=c-1;
        if(nextR==n)
            nextR=0;
        if(nextC==-1)
            nextC=n-1;
        if((magicSquare[nextR][nextC]!=0 && magicSquare[r][c]%n==0 ) )
        {
            nextR-=2;
            nextC++;
        }
        if((r==(n-1)) && (c==0))
        {
            r--;
            continue;
        }
        r=nextR;
        c=nextC;
    }

    printf("Sum of each row, colum or diagonal is: %d", n*(n*n +1)/2);
    printf("\nThe magic matrix is: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", magicSquare[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    if(n%2 != 1)
        printf("Magic Matrix not possible for even values.");
    else
        magic(n);

    return 0;
}