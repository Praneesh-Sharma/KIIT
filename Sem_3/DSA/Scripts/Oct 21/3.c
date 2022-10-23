//WAP to implement 2 stacks in a single array
#include <stdio.h>
int top1=-1, top2=-1;

void push(int stack, int top, int a){
    if(top == -1)
        printf("overflow");
    else
        stack[++top] = a;
}

char pop(int stack, int top){
    return stack[top--];
}

void split(int arr[], int a){
    int top1, top2;
    int m,n;
    if(a%2==0){
        m = a/2;
        n = a/2;
    }
    else{
        m=a/2;
        n=m+1;
    }
    int stack1[m], stack2[n];

}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    split(arr, n);
    return 0;
}