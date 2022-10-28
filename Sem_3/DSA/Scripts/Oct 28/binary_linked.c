//implement binary tree using linked list
#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int data;
    struct Tree *lc, *rc;
};

void buildTree(struct Tree *ptr){
    int ch;
    struct Tree *new;
    printf("Enter the value: ");
    scanf("%d", &ptr->data);
    ptr->lc = NULL;
    ptr->rc = NULL;

    printf("Do you want to add left child of %d(1/0): ", ptr->data);
    scanf("%d", &ch);
    if(ch==1){
        new = (struct Tree *)malloc(sizeof(struct Tree));
        ptr->lc = new;
        buildTree(new);
    }

    printf("Do you want to add right child of %d(1/0): ", ptr->data);
    scanf("%d", &ch);
    if(ch==1){
        new = (struct Tree *)malloc(sizeof(struct Tree));
        ptr->rc = new;
        buildTree(new);
    }
}

void printInorder(struct Tree *ptr){
    if (ptr == NULL)
        return;
    printInorder(ptr->lc);
    printf("%d ", ptr->data);
    printInorder(ptr->rc);
}

void printPreorder(struct Tree *ptr){
    if (ptr == NULL)
        return;
    printf("%d ", ptr->data);
    printPreorder(ptr->lc);
    printPreorder(ptr->rc);
}

void printPostorder(struct Tree *ptr){
    if (ptr == NULL)
        return;
    printPostorder(ptr->lc);
    printPostorder(ptr->rc);
    printf("%d ", ptr->data);
}

void main(){
    struct Tree *root;
    root = (struct Tree *)malloc(sizeof(struct Tree));
    buildTree(root);

    printf("\nInorder traversal of binary tree is: ");
    printInorder(root);

    printf("\n\nPreorder traversal of binary tree is: ");
    printPreorder(root);

    printf("\n\nPostorder traversal of binary tree is: ");
    printPostorder(root);
}