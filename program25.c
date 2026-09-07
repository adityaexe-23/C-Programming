//write a program to join two strings
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Joined string is: %s", str1);
    return 0;
}

