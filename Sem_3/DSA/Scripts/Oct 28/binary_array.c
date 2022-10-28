//implement binary tree using array
#include <stdio.h>

void buildTree(int t[], int index, int item){
    int ch, data;
    t[index] = item;
    printf("Do you want to add left child of %d(1/0): ", item);
    scanf("%d", &ch);
    if(ch == 1){
        printf("Enter the value of the left child: ");
        scanf("%d", &data);
        buildTree(t, 2*index+1, data);
    }
    
    printf("Do you want to add right child of %d(1/0): ", item);
    scanf("%d", &ch);
    if(ch == 1){
        printf("Enter the value of the right child: ");
        scanf("%d", &data);
        buildTree(t, 2*index+2, data);
    }
}

void main(){
    int t[20], item;
    for(int i=0;i<20;i++)
        t[i] = -1;
    printf("Enter the root value: ");
    scanf("%d", &item);
    buildTree(t, 0, item);

    printf("\nTree:");
    for(int i=0;i<20;i++){
        if(t[i] == -1) printf("-");
        else printf("%d", t[i]);
    }
}