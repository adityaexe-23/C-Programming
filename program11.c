#include<stdio.h>
int main(){
    char day;
    printf("Enter a character for days like M, T, W, Th, F, S, Su");
    scanf("%s", &day);
    switch(day)
    {
        case 'M': printf("The day is Monday");
            break;
        case 'T': printf("The day is Monday");
            break;
        case 'W': printf("The day is Monday");
            break;
        case 'Th': printf("The day is Monday");
            break;
        case 'F': printf("The day is Monday");
            break;
        case 'S': printf("The day is Monday");
            break;
        case 'Su': printf("The day is Monday");
            break;
        default: printf("Invalid Input");
            break;
    }
}