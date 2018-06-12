#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <time.h>
#include <omp.h>
#include <stdio.h>

using namespace std;


 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   
   //omp_set_num_threads(1);
   //#pragma omp parallel for private(i, j, swapped)
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
   }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    clock_t tiempo = clock();
    int n = 200000;
    int arr[n];
    
    srand (time(NULL));

	for(int i = 0; i < n; i++)
		arr[i] = rand() % 1000;

    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("tiempo es: %ld \n",(clock() - tiempo)/CLOCKS_PER_SEC);

    return 0;
}
