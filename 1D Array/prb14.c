#include <stdio.h>

int main() {



int n;
scanf("%d", &n);
int A[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &A[i]);
}
int m;
scanf("%d", &m);
int B[m];
for (int i = 0; i < m; i++)
{
    scanf("%d", &B[i]);
}
int max = (n>m)?n:m;
int store_intersec[max];
int indx = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
       if (A[i] == B[j])
       {
        store_intersec[indx++] = B[j];
       }
       
    }
    
}

if (indx == 0)
{
    printf("Empty Set\n");
    return 0;
}


for (int i = 0; i < indx; i++)
{
    printf("%d ", store_intersec[i]);
}





    return 0;
}