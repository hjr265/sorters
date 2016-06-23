import util

# sort implements insertion sort algorithm. The function takes an array.
def sort(a):
	for i in range(2, len(a)):
		for k in range(i, 0, -1):
			if a[k] >= a[k-1]:
				break
			util.swap(a, k, k-1)
