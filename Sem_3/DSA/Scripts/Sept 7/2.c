//WAP that takes two operands and one operator from the user and perform the operation and prints the result by using Switch statement.
#include <stdio.h>

int main(){
    float num1,num2;
    int op;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("1. Add\n2. Difference\n3. Multiply\n4. Divide\n\nEnter your choice: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Sum: %.2f", num1+num2);
            break;
        case 2:
            printf("Difference: %.2f", num1-num2);
            break;
        case 3:
            printf("Multiplication: %.2f", num1*num2);
            break;
        case 4:
            printf("Division: %.2f", num1/num2);
            break;
        default:
            printf("Invalid input.");
    }
    return 0;
}