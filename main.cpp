#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	// IF no two elements were swapped by inner loop, then break
	if (swapped == false)
		break;
}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
	int arr[50000];
	for(int i = 0; i <= 50000; i++){
		//srand(time(NULL));
		int aleatorio = 1+rand()%(1000001-1);
		//cout<<aleatorio<<endl;
		arr[i] = aleatorio;
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	//printArray(arr, n);
	return 0;
}
