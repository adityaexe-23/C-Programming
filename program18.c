#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=1, pro=1;
    do{
        pro=pro*i;
        i++;
    }
    while(i<=n);
    printf("The factorial of %d is %d",n,pro);
}