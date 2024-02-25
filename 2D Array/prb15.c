#include <stdio.h>



int main() {
    int m, n;

    // Input the dimensions of the matrix
    scanf("%d %d", &m, &n);



    // Declare the matrix
    int matrix[m][n];
int sum  = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];


        }
    }

printf("%d\n", sum);
          return 0;
}
