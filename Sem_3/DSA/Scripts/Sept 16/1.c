//addition of sparse matrix
#include <stdio.h>
#define n 20

void create(int a[n][n], int row, int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter element [%d][%d]: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void add_mat(int a[n][n],int b[n][n],int c[n][n], int row3, int column3){
    for(int i=0; i<row3; i++){
        for(int j=0; j<column3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void sparse_creation(int a[n][n], int row, int column, int b[n][3]){
    int k=1;
    b[0][0] = row;
    b[0][1] = column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(a[i][j] != 0){
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2] = k-1;
    }
}

void sparse_display(int res[n][3]){
    int col = res[0][2];
    printf("Sparse form: \n");
    for(int i=0;i<=col;i++)
        printf("%d\t%d\t%d\n", res[i][0], res[i][1], res[i][2]);
}

int main(){
    int a[n][n], b[n][n], c[n][n], res[n][3], row1, column1, row2, column2, row3, column3;
    printf("Enter number of rows and columns of matrix 1: ");
    scanf("%d %d", &row1, &column1);
    create(a, row1, column1);
    printf("Enter number of rows and columns of matrix 2: ");
    scanf("%d %d", &row2, &column2);
    create(b, row2, column2);

    if(column1>column2)
        column3 = column1;
    else
        column3 = column2;

    if(row1>row2)
        row3 = row1;
    else
        row3 = row2;

    add_mat(a, b, c, row3, column3);
    sparse_creation(c, row3, column3, res);
    sparse_display(res);

    return 0;
}