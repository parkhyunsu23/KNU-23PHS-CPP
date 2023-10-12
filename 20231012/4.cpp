#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(&arr[i], &arr[minIndex]);
		}
	}
}

int main() {
	int arr[] = { 5, 4, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("정렬 전 배열 : ");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}

	sort(arr, n);

	printf("\n오름차순으로 정렬된 배열 : ");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}

	return 0;
}
