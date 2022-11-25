//DLL creation, delteion, traversal
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void create(){
    struct Node *new, *ptr=head;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = NULL;

    if(head==NULL){
        new->prev =  NULL;
        head = new;
        ptr = new;
    }
    else{
        ptr->prev = new;
        new->next = ptr;
        ptr = ptr->next;
    }
    int n=0;
    while(n!=1){
        int num;
        printf("Do you want to add another node(1/0): ");
        scanf("%d", &num);
        if(num==1){
            new = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter data: ");
            scanf("%d", &new->data);
            new->next = NULL;
            new->prev = ptr;
            ptr->next = new;
            ptr = ptr->next;
        }
        else{
            n++;
        }
    }
}

void display(){
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void delete(){
    struct Node *ptr=head, *temp;
    while(ptr->next != NULL){
        temp = ptr->next->next->next;
        temp->prev = ptr;
        ptr->next = temp;
        ptr = ptr->next;
    }
}

int main(){
    create();
    display();
    printf("\n");
    delete();
    display();

    return 0;
}