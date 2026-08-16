#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int dig,sum=0, copy=n;
    while(n>0){
        dig=n%10;
        sum=sum+ pow(dig,3);
        n=n/10;
    }if (copy==sum){
        printf("%d is an Armstrong number",copy);}
        else
        {
            printf("%d is not an Armstrong number",copy);
        }
    return 0;
}