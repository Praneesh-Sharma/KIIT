//sparse matrix using array
#include <stdio.h>
#define n 20

void create(int a[n][n], int row, int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter elemnet [%d][%d]: ", i+1,j+1);
            scanf("%d", &a[i][j]);
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

void sparse_display(int b[n][3]){
    int col = b[0][2];
    printf("Sparse form: \n");
    for(int i=0;i<=col;i++)
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
}

int main(){
    int a[n][n], b[n][3], row, column;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &column);

    create(a, row, column);
    sparse_creation(a, row, column, b);
    sparse_display(b);

    return 0;
}