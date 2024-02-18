#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

int max = 0, min = arr[0];
int max_indx = 0, min_indx = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
        max_indx = i;
    }
    else if (min>arr[i])
    {
        min = arr[i];
        min_indx= i;
    }
    
    
}

printf("Max: %d, Index: %d\nMin: %d, Index: %d",max, max_indx, min, min_indx);
    return 0;
}