#include<stdio.h>
int main() {
    char n;
    printf("Enter a character: ");
    scanf("%c", &n);
    int number = (int)n;
    printf("The ASCII value of the character is: %d\n", number);
    if(48<=number && number<=57){
        printf("The character is a digit.\n");
    }
    else if((number>=65 && number<=90) || (number>=97 && number<=122)){
        printf("The character is an alphabet.\n");
    }
    else{
        printf("The character is a special character.\n");
    }
    return 0;   
}