void swap(int *a, int *b);

// bubble implements bubble sort algorithm. The function takes an array and its length.
void bubble(int a[], int n) {
	for(int i = 0; i < n; i++) {
		int swapped = 0;
		for(int j = n-1; j > i; j--) {
			if(a[j] < a[j-1]) {
				swap(&a[j], &a[j-1]);
				swapped = 1;
			}
		}
		if(swapped == 0) {
			break;
		}
	}
}
