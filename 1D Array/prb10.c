#include <stdio.h>
#define MAX 50
int main() {

 int A[MAX];
 int B[MAX];

int n;
scanf("%d", &n);

for (int i = 0; i < n; i++)
{
    scanf("%d", &A[i]);
}
int m;
scanf("%d", &m);
for (int i = 0; i < m; i++)
{
    scanf("%d", &B[i]);
}
int max = (n>m)?n:m;

for (int i = 0; i < max; i++)
{
    int temp = A[i];
    A[i]= B[i];
    B[i] = temp;
}
printf("Array B:\n");
for (int i = 0; i < n; i++)
{
    printf("%d ", B[i]);
}
printf("\nArray A:\n");
for (int i = 0; i < m; i++)
{
    printf("%d ", A[i]);
}





    return 0;
}
