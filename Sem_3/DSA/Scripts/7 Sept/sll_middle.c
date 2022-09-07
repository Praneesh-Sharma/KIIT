//a program to find the iddle node os a single linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void create(){
    struct Node *new, *ptr;
    int i=0;
    char ch;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    head = new;
    ptr = head;
    fflush(stdin);

    while(i!=1){
        printf("Do you want to add (Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='Y' || ch=='y'){
            new = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter next value: ");
            scanf("%d", &new->data);
            new->next=NULL;
            ptr->next=new;
            ptr = new;
            fflush(stdin);
        }
        else{
            i=1;
        }
    }
}

void traverse(){
    struct Node *ptr;
    ptr = head;
    printf("The list is:");
    while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
}

int count_num(){
    struct Node *ptr;
    ptr = head;
    int count=0;
    while(ptr!=NULL){
        ptr = ptr->next;
        count++;
    }
    printf("\nThe number of nodes are: %d", count);
    return count;
}

void mid_node(int pos){
    struct Node *ptr=head;
    int count=1;
    if(pos%2!=0){
        int m = (pos/2)+1;
        while(ptr!=NULL && count!=m){
            ptr = ptr->next;
            count++;
        }
        printf("\nMiddle node: %d", ptr->data);
    }
    else{
        int m = pos/2;
        while(ptr!=NULL && count!=m){
            ptr = ptr->next;
            count++;
        }
        printf("\nMiddle nodes: %d %d", ptr->data, (ptr->next)->data);
    }
}

int main(){
    int num;
    create();
    traverse();
    num = count_num();
    mid_node(num);

    return 0;
}