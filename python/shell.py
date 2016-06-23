import util

# sort implements shell sort algorithm. The function takes an array.
def sort(a):
	h = 0
	while h < len(a):
		h = 3*h+1
	while h > 0:
		h = h//3
		for k in range(0, h):
			for j in range(0, len(a)//h, len(a)//h):
				_insertion(a, j, len(a)//h-j)

def _insertion(a, l, n):
	for i in range(l+2, l+n):
		for k in range(i, l, -1):
			if a[k] >= a[k-1]:
				break
			util.swap(a, k, k-1)
