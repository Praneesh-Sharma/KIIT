#include <stdio.h>

int main(void){
    int x = 5;
    int y = 5;
    int array[x][y];

    int number;
    printf("Enter the number to be stored in array: ");
    scanf("%d",&number);

    int number_copy = number;
    int array1[1000];
    int i = 0;
    while(number_copy!=0){
        array1[i] = number_copy%10;
        number_copy = number_copy/10;
        i++;
    }

    int array2[1000];
    int d = 0;
    for(int j = i-1; j >= 0; j--){
        array2[d] = array1[j];
        d++;
    }

    int counting = i;
    int flag = 0;
    int counting2 = 0;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(flag == 0){
                array[i][j] = array2[counting2];
                counting2++;
                if(counting2==counting){
                    flag = 1;
                    counting2 = 0;
                } 
            }
            else{
                array[i][j] = array1[counting2];
                counting2++;
                if(counting2==counting){
                    flag = 0;
                    counting2 = 0;
                }
            }
        }

    }

    printf("The required matrix is as follows:\n");
    for(int i=0; i<x; i++){
        printf("\n[");
        for(int j=0; j<y; j++){
            printf("'%d' ",array[i][j]);
        }
        printf("]");
    }
}