#include <stdio.h>

int main() {
    int myArray[3][4]; // 3 rows and 4 columns

    // Initialize the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            myArray[i][j] = i * 4 + j + 1;
        }
    }

    // Access and print the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
