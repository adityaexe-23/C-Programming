#include<stdio.h>
int main(){
    int recharge;
    printf("Enter the amount to recharge: ");
    scanf("%d", &recharge);
    
    switch(recharge){
        case 100: printf("1GB datapack\n");
            break;
        case 200: printf("2GB datapack\n");
            break;
        case 500: printf("5GB datapack\n");
            break;
        default: printf("Invalid recharge amount\n");
            break;
    }
    return 0;
}