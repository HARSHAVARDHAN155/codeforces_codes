/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + ((r - l) / 2);

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

/* Driver code */
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}

// #include <stdio.h>

// void merge(int arr[], int lb, int mid, int ub)
// {
//     int brr[1000];
//     int i = lb;
//     int j = mid + 1;
//     int k = lb;
//     while (i < mid && j < ub)
//     {
//         if (arr[i] <= arr[j])
//         {
//             brr[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             brr[k] = arr[j];
//             j++;
//         }
//         k++;
//     }
//     // if (i > mid)
//     // {
//     while (j < ub)
//     {
//         brr[k] = arr[j];
//         j++;
//         k++;
//     }
//     //  }
//     // else
//     // {
//     while (i < mid)
//     {
//         brr[k] = arr[j];
//         j++;
//         k++;
//     }
//     //   }
//     for (int k = lb; k < ub; k++)
//     {
//         arr[k] = brr[k];
//     }
// }
// void mergesort(int arr[], int lb, int ub)
// {
//     if (lb < ub)
//     {
//         int mid = lb + (ub-lb) / 2;
//         mergesort(arr, lb, mid);
//         mergesort(arr, mid + 1, ub);
//         merge(arr, lb, mid, ub);
//     }
// }
// void printArray(int A[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", A[i]);
//     printf("\n");
// }
// int main()
// {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     printf("Given array is \n");
//     printArray(arr, arr_size);

//     mergesort(arr, 0, arr_size - 1);

//     printf("\nSorted array is \n");
//     printArray(arr, arr_size);
//     return 0;
// }