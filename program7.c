#include<stdio.h>
int main(){
    int  a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c){
        printf("a is the smallest number %d \n", a);
    }
    else if(b<c){
        printf("b is the smallest number %d \n", b);
    }
    else{
        printf("c is the smallest number %d \n", c);
    }
    return 0;
}