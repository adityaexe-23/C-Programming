#include <stdio.h>

int main(){
    int arr[2][3],i,j, sum=0;
    printf("Enter the number of elements: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements: %d", sum);
    return 0;
}