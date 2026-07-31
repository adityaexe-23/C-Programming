#include<stdio.h>
int main(){
    int day;
    printf("Enter day in 1-7 ");
    scanf("%d",&day);
    
    switch(day){
        case 2 : 
        case 3 :
        case 4 :
        case 5 :
        case 6 : 
        printf("The day is a Weekday");
        break;
        case 1 :
        case 7 :
        printf("The day is a weekend");
        break;
        default: ("Invalid");
        break;
        }
        return 0;
}