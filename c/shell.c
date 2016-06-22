void insertion(int a[], int n);

// shell implements shell sort algorithm. The function takes an array and its length.
void shell(int a[], int n) {
	int h = 0;
	while(h < n)
		h = 3*h+1;
	while(h > 0) {
		h = h/3;
		for(int k = 0; k < h; k++) {
			for(int j = 0; j < n/h; j += n/h)
				insertion(a+j, n/h-j);
		}
	}
}
