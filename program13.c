#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    char op;
    printf("Select '+', '-',  '/', '*' to perform operations: ");
    scanf(" %c", &op);

    switch (op){
        case '+': printf("Addition: %d \n",(a+b));
            break;
        case '-': printf("Subtraction: %d \n",(a-b));
            break;
        case '/': printf("Division: %d \n",(a/b));
            break;
        case '*': printf("Multiplication: %d \n",(a*b));
            break;
        default: printf("Invalid Input");
            break;
    }
    return 0;
}