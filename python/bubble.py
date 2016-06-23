import util

# sort implements bubble sort algorithm. The function takes an array.
def sort(a):
	for i in range(len(a)):
		swapped = False
		for j in range(len(a)-1, i, -1):
			if a[j] < a[j-1]:
				util.swap(a, j, j-1)
				swapped = True
		if not swapped:
			break
