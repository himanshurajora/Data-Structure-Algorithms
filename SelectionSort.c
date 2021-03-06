#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void SelectionSort(int a[], int n)
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}

void main()
{
	printf("SELECTION SORT\n");
	int i;
	int arr[10] = {3, 52, 5, 26, 2, 4, 26, 24, 25, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Before Sorting: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
	SelectionSort(arr, size);
	printf("After Sorting: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr[i]);
	}
	getch();
}
