import util

# sort implements selection sort algorithm. The function takes an array.
def sort(a):
	for i in range(len(a)):
		k = i
		for j in range(i+1, len(a)):
			if a[j] < a[k]:
				k = j
		util.swap(a, i, k)
