#include <algorithm>

using namespace std;

void sink(int a[], int i, int n);

// heap implements heap sort algorithm. The function takes an array and its length.
void heap(int a[], int n) {
	int h[256];
	for(int i = 0; i < n; i++) {
		h[i+1] = a[i];
	}
	for(int i = n/2; i >= 1; i--)
		sink(h, i, n);
	for(int i = 1; i <= n; i++) {
		swap(h[1], h[n-i+1]);
		sink(h, 1, n-i);
	}
	for(int i = 0; i < n; i++) {
		a[i] = h[i+1];
	}
}

void sink(int a[], int i, int n) {
	int lc = 2*i;
	if(lc > n)
		return;
	int rc = lc+1;
	int mc = (rc > n) ? lc : (a[lc] > a[rc] ? lc : rc);
	if(a[i] >= a[mc])
		return;
	swap(a[i], a[mc]);
	sink(a, mc, n);
}
