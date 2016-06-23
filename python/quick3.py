import random
import util

# sort implements quick sort (3 way) algorithm. The function takes an array.
def sort(a):
	_sort(a, 0, len(a))

def _sort(a, l, n):
	if n <= 1:
		return
	util.swap(a, l+n-1, l+random.randint(0, n-1))
	i = l
	k = l
	p = l+n
	while i < p:
		if a[i] < a[l+n-1]:
			util.swap(a, i, k)
			i += 1
			k += 1
		elif a[i] == a[l+n-1]:
			p -= 1
			util.swap(a, i, p)
		else:
			i += 1
	m = min(p-k, l+n-p+1)
	for i in range(0, m-1):
		util.swap(a, k+i, l+n-m+1+i)
	_sort(a, l, k-l)
	_sort(a, k+1, l+n-k-1)
