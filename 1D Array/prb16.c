
#include <stdio.h>

int main() {
 int n;
 scanf("%d", &n); 
 int arr1[n];
 for (int i = 0; i <n; i++)
 {
    scanf("%d", &arr1[i]);
 }
 int m;
 scanf("%d", &m); 
int arr2[m];

for (int i = 0; i < m; i++)
{
   scanf("%d", &arr2[i]);

}

int subtrct[m+n];
int subtrct_Indx = 0;



for (int i = 0; i < n; i++)
{

 int flag = 1; 
   for (int j =0 ; j < m; j++)
   {
    if (arr1[i] == arr2[j])    // checking if arr2 element and arr1 element is same
    {
      flag = 0;
      break;
    }
     
   }
  if (flag) // if arr2 element is not present in the arr1 array then put it to the subtrct array.
  {
   subtrct[subtrct_Indx++] = arr1[i]; 

  }
   
}

for (int i = 0; i < subtrct_Indx; i++)
{
   printf("%d ", subtrct[i]);
}

 
    return 0;
}
