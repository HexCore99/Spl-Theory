#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    // Declare the matrix
    int matrix[m][n];

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
            for(int i = 0; i<m; i++){
                for (int j = 0; j < n; j++)
                {

                    // here traversing the whole matrix for every [i][j]
            for (int p = 0; p < m; p++) {
                for (int q = 0; q < n; q++) {
                    if (p == i && j == q)
                    {
                       continue; 
                    }
                    
                       else if ((matrix[i][j] == matrix[p][q]))
                        {
                            matrix[p][q] = -1;
                        }
                        
                    }
               
 
                }
            }

        }
    


    // Display the modified matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
