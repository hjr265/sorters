// merge implements merge sort algorithm. The function takes an array and its length.
void merge(int a[], int n) {
	if(n <= 1)
		return;
	int m = n/2;
	merge(a, m);
	merge(a+m, n-m);
	int b[256];
	for(int i = 0; i < m; i++) {
		b[i] = a[i];
	}
	int i = 0, j = m, k = 0;
	while(i < m && j < n) {
		if(a[j] < b[i])
			a[k++] = a[j++];
		else
			a[k++] = b[i++];
	}
	while(i < m) {
		a[k++] = b[i++];
	}
}
