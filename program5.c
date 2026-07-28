#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int avg = (a+b+c)/3;
    printf("The average of the three numbers is: %d\n",avg);
    return 0;
}