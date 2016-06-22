#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int a[], int n);
void heap(int a[], int n);
void insertion(int a[], int n);
void merge(int a[], int n);
void quick(int a[], int n);
void quick3(int a[], int n);
void selection(int a[], int n);
void shell(int a[], int n);

int main() {
	time_t t;
	srand((unsigned) time(&t));

	int a[] = {3, 5, 2, 5, 6, 4, 4, 7, 3, 5, 2, 5, 6, 4, 4, 7, 1, 0, 8, 9};
	shell(a, 20);
	for(int i = 0; i < 20; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
