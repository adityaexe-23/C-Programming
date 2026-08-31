#write a c-program to input and display a 2D array of 2 rows snd 3 columns.
include <stdio.h>
int main() {
    int arr[2][3];
    int i, j;

    // Input elements into the 2D array
    printf("Enter elements for a 2D array of 2 rows and 3 columns:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the 2D array
    printf("\nThe 2D array is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}