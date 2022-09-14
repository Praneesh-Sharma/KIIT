//WAP to reverse array using stack
#include <stdio.h>
#include <string.h>

int top, stack[100];

void push(char a){
    if(top == -1)
        printf("overflow");
    else
        stack[++top] = a;
}

char pop(){
    return stack[top--];
}

int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]s", str);
    int len = strlen(str);
    
    for(int i=0;i<len;i++)
        push(str[i]);

    printf("Reversed string: ");
    for(int i=0;i<=len;i++){
        char ch;
        ch = pop();
        printf("%c", ch);
    }

    return 0;
}
