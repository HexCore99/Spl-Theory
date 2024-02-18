#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

  int search_Num;
  scanf("%d", &search_Num);

int search_Num_Indx[n];
int count_found_elements = 0;

// searching for the input number.
for (int i = 0; i < n; i++)
{
    if (arr[i]== search_Num)
    {
        search_Num_Indx[count_found_elements] = i; // storing found elements index in search_Num_Indx Array.
        count_found_elements++;
        
    }
    
}


if (count_found_elements)
{
    printf("FOUND at index position:");
for (int i = 0; i < count_found_elements; i++)
{
    printf("%d ", search_Num_Indx[i]);
}

}else
{
    printf("NOT FOUND\n");
}



    return 0;
}