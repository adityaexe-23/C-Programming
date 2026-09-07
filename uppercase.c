#include <stdio.h>
#include <string.h>
//write  a c program to convert a string to uppercase
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    strupr(str);
    printf("Uppercase string is: %s", str);
    strlwr(str);
    printf("Lowercase string is: %s", str);
    return 0;
}