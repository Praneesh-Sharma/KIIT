/*Let A be nXn square matrix. WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
#include <stdio.h>
const int n=3;

//Find the number of nonzero elements in A
void nonZero(int mat[n][n]){
    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j] == 0)
                count++;
    printf("Number of non-zero elements: %d", (n*n)-count);
}

//Find the sum of the elements above the leading diagonal
void sumLeading(int mat[n][n]){
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(j>i)
                sum+=mat[i][j];
    printf("\nSum of elements above the leading diagonal: %d", sum);
}

//Display the elements below the minor diagonal
void belowMinor(int mat[n][n]){
    printf("\nElements below minor diagonal:");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((i+j)>n-1)
                printf(" %d", mat[i][j]);
}

//Find the product of the diagonal elements.
void productDiagonal(int mat[n][n]){
    int product=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(i==j)
                product *= mat[i][j];
            else if((i+j) == n-1)
                product *= mat[i][j];
        }
    printf("\nProduct of diagonal elements: %d", product);
}

int main()
{
    int A[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    nonZero(A);
    sumLeading(A);
    belowMinor(A);
    productDiagonal(A);

    return 0;
}