#include <stdio.h>
#include <conio.h>
#include <time.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void BubbleSort(int a[], int n)
{
	int i, j, min;

	for (j = n; j >= 0; j--)
	{

		for (i = 0; i < j - 1; i++)
		{
			if (a[i + 1] < a[i])
			{
				swap(&a[i], &a[i + 1]);
			}
		}
	}
}

void main()
{
	printf("BUBBLE SORT\n");
	int i;
	int arr[10000] = {3, 52, 5, 26, 2, 4, 26, 24, 25, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Before Sorting: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
	clock_t start, end;
	start = clock();
	BubbleSort(arr, size);
	end = clock();
	printf("After Sorting: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
	printf("fun() took %f seconds to execute \n", ((double)(end - start) / CLOCKS_PER_SEC));
	getch();
}
