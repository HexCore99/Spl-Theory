#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

 int cpy_arr[n];
 for (int i = 0; i <n; i++)
 {
    cpy_arr[i] = arr[n-i-1];  // putting (n-1)th element of arr to the 0th index of cpy_arr;
                             //           (n-2)th element of arr to the 1th index of cpy_arr;
                             //            (n-i-1)th element of arr to the ith index of cpy_arr;
 }

  
printf("Array A:\n");
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}


printf("\n");
printf("Array B:\n");
for (int i = 0; i < n; i++)
{
    printf("%d ",cpy_arr[i]);
}

    return 0;
}