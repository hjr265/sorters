#include <stdlib.h>

void swap(int *a, int *b);

// quick implements quick sort algorithm. The function takes an array and its length.
void quick(int a[], int n) {
	if(n <= 1) {
		return;
	}
	swap(&a[0], &a[(int)(rand())%n]);
	int k = 0;
	for(int i = 1; i < n; i++) {
		if(a[i] < a[0])
			swap(&a[++k], &a[i]);
	}
	swap(&a[0], &a[k]);
	quick(a, k);
	quick(a+k+1, n-(k+1));
}
