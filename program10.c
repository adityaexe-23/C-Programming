#include<stdio.h>
int main(){
    int i,n,copy,dig;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        copy=i;
        int temp=i;
        int sum=0;
        while(temp>0){
            dig=temp%10;
            sum+=(dig*dig*dig);
            temp/=10;
        }
        if(sum==copy)
        printf("The number %d is Armstrong number\n", copy);
    }
    return 0;
}