//WAP to perform stack operations using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int num){
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = num;

    if(top == NULL)
        new->next = NULL;
    else
        new->next = top;
    top = new;
}

void pop(){
    struct Node *temp = top;
    if(top == NULL)
        printf("UNDERFLOW");
    else{
        top = top->next;
        free(temp);
    }
}

void display(){
    struct Node *ptr = top;
    if(top == NULL)
        printf("UNDERFLOW");
    else{
        printf("Stack:");
        while(ptr->next != NULL){
            printf(" %d", ptr->data);
            ptr = ptr->next;
        }
        printf(" %d", ptr->data);
    }
}

int main(){
    int num, i=0, val;
    while(i!=1){
        printf("\n\n1. Display\n2. Push\n3. Pop\n4. Exit\n\nEnter your choice: ");
        scanf("%d", &num);

        switch(num){
            case 1:
                display();
                break;
            case 2:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);
                display();
                break;
            case 3:
                pop();
                display();
                break;
            case 4:
                i=1;
                printf("Exited");
                break;
            default:
                printf("Invalid Input.");
        }
    }
}