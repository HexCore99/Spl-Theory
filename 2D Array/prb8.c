#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrix
    scanf("%d %d", &m, &n);


    // Declare the matrix
    int matrix[m][n];

    int element = 0;
    int RowIndx = 0, ColIndx = 0;

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);


            if (matrix[i][j] > element) {
                element = matrix[i][j];
                RowIndx = i;
                ColIndx = j;
            }

        }
    }


    // Display the maximum element and its index location
    printf("Max: %d\n", element);
    printf("Location: [%d][%d]\n", RowIndx, ColIndx);

    return 0;
}
