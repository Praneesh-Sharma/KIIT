#include <stdio.h>

int main(void){
    int n ;
    printf("Enter array size for nxn matrix: ");
    scanf("%d",&n);
    int arr[n][n];

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int num_copy = num;
    int arr1[1000]; //reverse
    int i = 0;
    while(num_copy!=0){
        arr1[i] = num_copy%10;
        num_copy = num_copy/10;
        i++;
    }

    int arr2[1000]; //forward
    int c = 0;
    for(int j = i-1; j >= 0; j--){
        arr2[c] = arr1[j];
        c++;
    }

    int count = i;
    int flag = 0;
    int count2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(flag == 0){
                arr[j][i] = arr2[count2];
                count2++;
                if(count2==count){
                    flag = 1;
                    count2 = 0;
                } 
            }
            else{
                arr[j][i] = arr1[count2];
                count2++;
                if(count2==count){
                    flag = 0;
                    count2 = 0;
                }
            }
        }

    }

    printf("The matrix is as follows:\n");
    for(int i=0; i<n; i++){
        printf("\n[");
        for(int j=0; j<n; j++){
            printf("'%d' ",arr[i][j]);
        }
        printf("]");
    }
}