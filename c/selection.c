void swap(int *a, int *b);

// selection implements selection sort algorithm. The function takes an array and its length.
void selection(int a[], int n) {
	for(int i = 0; i < n; i++) {
		int k = i;
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[k])
				k = j;
		}
		swap(&a[i], &a[k]);
	}
}
