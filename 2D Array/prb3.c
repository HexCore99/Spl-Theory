#include <stdio.h>

int main() {
    float arr[3][3];

    // Input the matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    // Calculate the determinant
    float det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2])
                - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
                + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    // Display the determinant
    printf(" %.2f\n", det);

    return 0;
}
