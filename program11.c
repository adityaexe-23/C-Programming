#include<stdio.h>
int main(){
    char day;
    printf("Enter a character for days like M, T, W, t, F, S, s: ");
    scanf(" %c", &day);
    
    switch(day)
    {
        case 'M': printf("The day is Monday");
            break;
        case 'T': printf("The day is Tuesday");
            break;
        case 'W': printf("The day is Wednesday");
            break;
        case 't': printf("The day is Thursday");
            break;
        case 'F': printf("The day is Friday");
            break;
        case 'S': printf("The day is Saturday");
            break;
        case 's': printf("The day is Sunday");
            break;
        default: printf("Invalid Input");
            break;
    }
    return 0;
}