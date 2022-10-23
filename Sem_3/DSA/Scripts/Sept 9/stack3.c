//WAP to perform various operation on a stack using array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top;
char stack[100];

void push(char a){
    if(top == -1)
        printf("overflow");
    else
        stack[++top] = a;
}

void pop()
{
    printf("Popped value: ");
    printf("%c", stack[top--]);
}

void display(){
    int temp = top;
    printf("\nArray:");
    while(top>-1){
        printf(" %c", stack[top--]);
    }
    top = temp;
}

int main(){
    char str[100];
    int num, i=0;
    printf("Enter string: ");
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
        push(str[i]);

    while(i!=1){
        char ch;
        printf("\n\n1. Display\n2. Push\n3. Pop\n4. Exit\n\nEnter choice: ");
        scanf("%d", &num);
        fflush(stdin);
        switch(num){
            case 1:
                display();
                break;
            case 2:
                printf("Enter character: ");
                scanf("%c", &ch);
                fflush(stdin);
                push(ch);
                display();
                break;
            case 3:
                pop();
                display();
                break;
            case 4:
                i=1;
                printf("Exited.");
                break;
            default:
                printf("Invaid input");
        }
    }
}