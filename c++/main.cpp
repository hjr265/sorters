#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

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
	quick3(a, 20);
	for(int i = 0; i < 20; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
