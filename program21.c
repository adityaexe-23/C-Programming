#include <stdio.h>
int main()
{

    int size,i;
    int positive=0, negative=0,zero=0;
    printf("enter no of elements");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d elements", size);
    for (int i=0; i<size; i++){
        scanf("%d", arr[i]);
    }

    for (int i=0; i<size; i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}