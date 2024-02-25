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
           if (i<  m/2)  // Working with upper half
           {
            if ((i == 0 && j<= m/2) || (i == 0 && j == m-1))
            {
                sum += matrix[i][j];
            }else if ( j== m/2 || j == m-1) 
            {
                sum += matrix[i][j];
            }
            
            
           }else if (i == m/2) // working with mid row
           {
            sum += matrix[i][j];
           }else  // working with bottom half
           {
         if ((i == m-1 && j == 0) || (i == m-1 && j>m/2))
           {
            sum += matrix[i][j];
           }else if (j == 0 || j == m/2)
           {
            sum += matrix[i][j];
           }           
           
            
           }
                       
        }
        
    }
    

printf("%d\n", sum);

    return 0;
}
