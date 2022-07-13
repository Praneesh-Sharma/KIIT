#include <stdio.h>
#include <string.h>

typedef struct items
{
    char item_name[40];
    char item_code[10];
    int price ;
    float quatity;
    int item_type;
}inventory[8];

typedef struct items
{
    char item_name[40];
    char item_code[10];
    int price ;
    float quatity;
    int item_type;
}inventory[4];

int main()
{
    int i,j;
    printf("Enter details of inventory: \n");

    //storing information
    for(i = 0; i<8; i++){
        printf("Enter item name: ");
        scanf("%s", inventory[i].item_name);
        printf("Enter item code: ");
        scanf("%d", inventory[i].item_code);
        printf("Enter price: ");
        scanf("%d", inventory[i].price);
        printf("Enter quantity: ");
        scanf("%f", inventory[i].quantity);
        printf("Enter item type: ");
        scanf("%d", inventory[i].item_type)
    }

    for(i = 0; i<8; i++){
        
    }
}