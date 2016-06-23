# sort implements merge sort algorithm. The function takes an array.
def sort(a):
	_sort(a, 0, len(a))

def _sort(a, l, n):
	if n <= 1:
		return
	m = n//2
	_sort(a, l, m)
	_sort(a, l+m, n-m)
	b = a[l:]
	i = 0
	j = l+m
	k = l
	while i < m and j < l+n:
		if a[j] < b[i]:
			a[k] = a[j]
			k += 1
			j += 1
		else:
			a[k] = b[i]
			k += 1
			i += 1
	while i < m:
		a[k] = b[i]
		k += 1
		i += 1
