#include <stdio.h>
void bubbleSort(int a[], int n) 
{
  for (int i = 0; i< n - 1; ++i)
    for (int j = 0; j < n - i - 1; ++j)
    {
    	if(a[j]>a[j+1])
    	{
    	int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
		}
	}
}
void printArray(int a[], int n)
 {
  for (int i = 0; i < n; ++i) 
  {
    printf("%d  ", a[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {24,14,2,54,18,1};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Unsorted Array is:\n");
  printArray(arr, size);
  bubbleSort(arr, size);
  printf("Sorted Array in Ascending Order is :\n");
  printArray(arr, size);
}
