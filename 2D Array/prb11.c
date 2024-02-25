#include <stdio.h>

int main() {
    int m;

    // Input the dimensions of the matrix
    scanf("%d", &m);


    // Declare the matrix
    int matrix[m][m];

    int element = 0;
int sum = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <m ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {

          if (i % 2 == 0 && j% 2 != 0)
          {
           sum += matrix[i][j]; 
          }else if(i % 2 != 0)
          {
            sum += matrix[i][j];
          }
          
           
            
            
        }
        
    }
    

printf("%d\n", sum);

    return 0;
}
