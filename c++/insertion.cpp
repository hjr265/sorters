#include <algorithm>

using namespace std;

// insertion implements insertion sort algorithm. The function takes an array and its length.
void insertion(int a[], int n) {
	for(int i = 2; i < n; i++) {
		for(int k = i; k > 0 && a[k] < a[k-1]; k--)
			swap(a[k], a[k-1]);
	}
}
