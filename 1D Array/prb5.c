#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

/*
here swapping 0th element with ( n-1)th element
              1th element with (n-2)th element
              ith element with n-i-1 element

*/
for (int i = 0; i < n/2; i++)
{
   int temp = arr[i];
   arr[i] = arr[n-i-1]; 
   arr[n-i-1] = temp;
}

 for (int i = 0; i < n; i++)
 {
    printf("%d ", arr[i]);
 }
  
    return 0;
}