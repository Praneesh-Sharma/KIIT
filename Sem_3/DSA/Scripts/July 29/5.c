#include <stdio.h>

int main()
{
    int r1,r2,c1,c2;
    int mat1[100][100], mat2[100][100], res[100][100];
    printf("Entering Details of the Matrix");

    printf("\nEnter number of rows of matrix 1: ");
    scanf("%d", &r1);
    printf("Enter number of columns of matrix 1: ");
    scanf("%d", &c1);
    printf("Enter number of rows of matrix 2: ");
    scanf("%d", &r2);
    printf("Enter number of columns of matrix 2: ");
    scanf("%d", &c2);
    
    if(c1 != r2){
        printf("Multiplication of matrices of given order not possible.");
    }

    printf("\nDetails of Matrix 1\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("Enter element %d %d: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nDetails of Matrix 2\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("Enter element %d %d: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = 0;
            for(int k=0; k<c1; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }


    printf("\nThe multiplied matrix is: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}