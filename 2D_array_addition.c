#include <stdio.h>

int main() {
    int r = 2, c = 3;
    int i,j;
    int a[2][3] = {{1, 2, 3},{4, 5, 6}};
    int b[2][3] = {{7, 8, 9},{1, 2, 3}};
    int sum[2][3];

    // Adding matrices
    for( i = 0; i < r; i++) {
        for( j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing result
    printf("Resultant Matrix:\n");
    for( i = 0; i < r; i++) {
        for( j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


