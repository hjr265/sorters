#include <algorithm>

using namespace std;

// bubble implements bubble sort algorithm. The function takes an array and its length.
void bubble(int a[], int n) {
	for(int i = 0; i < n; i++) {
		bool swapped = false;
		for(int j = n-1; j > i; j--) {
			if(a[j] < a[j-1]) {
				swap(a[j], a[j-1]);
				swapped = true;
			}
		}
		if(!swapped) {
			break;
		}
	}
}
