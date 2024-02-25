#include <stdio.h>

int main() {
    int m, n;
    int flag = 0;

    scanf("%d", &m);

    // Declare the matrix
    int matrix[m][m];
    int matrix2[m][m];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


for (int i = 0; i < m; i++)
{
for (int j = 0; j < m; j++)
{
if (matrix[i][j] != matrix[j][i])
{
    flag = 1;
    break;
}

}
 if (flag)
{
    break;
}
   
}

if (flag)
{
    printf("NO\n");
}else
{
    printf("YES\n");
}



    return 0;
}
