#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fptr ;
    int i, n, item_type, price;
    float quantity;
    char item_name[40], item_code[10] ;
    fptr = fopen("inventory.dat", "w") ;
    printf("Enter the number of items: ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("Enter the item name: ") ;
        scanf("%s", item_name) ;
        printf("Enter the item code: ") ;
        scanf("%s", item_code) ;
        printf("Enter the price: ");
        scanf("%d", &price);
        printf("Enter the quantity: ");
        scanf("%f", &quantity);
        printf("Enter item type: ");
        scanf("%d", &item_type);
        fprintf(fptr, "%s %s %d %f %d", item_name, item_code, price, quantity, item_type);
    }
    fclose(fptr);
    fptr = fopen("inventory.dat", "r") ;
    printf("Name    Code    Price    Quantity     Type\n");
    for(i = 0 ; i < n ; i++)
    {
        fscanf(fptr,"%s %s %d %f %d", &item_name, &item_code, &price, &quantity, &item_type) ;
        printf("%s 	 %s 	 %d 	 %0.2f 	 %d\n", item_name, item_code, price, quantity, item_type);
    }
    fclose(fptr);

    for(i=0;i<n;i++){
        
    }
    return 0;
}