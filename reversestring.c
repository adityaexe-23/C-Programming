#include <stdio.h>
#include <string.h>
//write a program to reverse a string
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("Reversed string is: %s", str);
    return 0;
}