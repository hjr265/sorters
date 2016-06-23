import random
import util

# sort implements quick sort algorithm. The function takes an array.
def sort(a):
	_sort(a, 0, len(a))

def _sort(a, l, n):
	if n <= 1:
		return
	util.swap(a, l, l+random.randint(0, n-1))
	k = l
	for i in range(l+1, l+n):
		if a[i] < a[l]:
			util.swap(a, ++k, i)
	util.swap(a, l, k)
	_sort(a, l, k-l)
	_sort(a, k+1, l+n-k-1)
