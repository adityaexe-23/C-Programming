#include<stdio.h>
int main(){
    int id;
    printf("Enter your ID:");
    scanf("%d",&id);

    switch(id){
        case 251013006156: printf("Aditya D.\n");
            break;
        case 251013006182: printf("Anushka V.\n");
            break;
        default: printf("Invalid ID\n");
            break;
    }
    return 0;
}