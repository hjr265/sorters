#include <stdlib.h>

void swap(int *a, int *b);
int min(int a, int b);

// quick3 implements quick sort (3 way) algorithm. The function takes an array and its length.
void quick3(int a[], int n) {
	if(n <= 1) {
		return;
	}
	swap(&a[n-1], &a[(int)(rand())%n]);
	int i = 0, k = 0, p = n;
	while(i < p) {
		if(a[i] < a[n-1])
			swap(&a[i++], &a[k++]);
		else if(a[i] == a[n-1])
			swap(&a[i], &a[--p]);
		else
			i++;
	}
	int m = min(p-k, n-p+1);
	for(int i = 0; i < m-1; i++)
		swap(&a[k+i], &a[n-m+1+i]);
	quick3(a, k);
	quick3(a+k+1, n-k-1);
}
