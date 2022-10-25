//WAP to implement 2 stacks in a single array
#include <stdio.h>
#define size 10

int arr[size];
int top1=-1, top2=size;

void push1(int val){
    if(top1 < top2 -1){
        top1++;
        arr[top1]=val;
    } else printf("OVERFLOW\n");
}

void push2(int val){
    if(top1 <top2-1){
        top2--;
        arr[top2]=val;
    } else printf("OVERFLOW\n");
}

void disp1(){
    for(int i=top1;i>=0;i--)
        printf(" %d", arr[i]);
    printf("\n");
}

void disp2(){
    for(int i=top2; i<size; ++i)
        printf(" %d", arr[i]);
    printf("\n");
}

int main(){
    int arr[size], val;
    for(int i=1; i<=5; ++i){
        printf("Enter value: ");
        scanf("%d", &val);
        push1(val);
    }
    for(int i=6; i<=10; ++i){
        printf("Enter value: ");
        scanf("%d", &val);
        push2(val);
    }

    disp1();
    disp2();

    return 0;
}