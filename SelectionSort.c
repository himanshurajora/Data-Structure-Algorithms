#include<stdio.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void SelectionSort(int a[], int n){
	int i,j;
	int *min;
	for(i=0; i<n; i++){
		min = &a[i];
		for(j=i; j<n; j++){
			if(a[j]< *min){
				min = &a[j];
			}
		}
		swap(&a[i],min);
	}
}


void main(){
	int i;
	int arr[10] = {3,52,5,26,2,4,26,24,25,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	SelectionSort(arr, size);
	for(i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
	
}
