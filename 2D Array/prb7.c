#include <stdio.h>

#define SIZE 3

int main() {

    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    //  matrix A
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // matrix B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multipling matrices A and B to matrix C
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display  matrix C

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
