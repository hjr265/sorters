import util

# sort implements heap sort algorithm. The function takes an array.
def sort(a):
	n = len(a)
	a.insert(0, 0)
	for i in range(n//2, 0, -1):
		sink(a, i, n)
	for i in range(1, n+1):
		util.swap(a, 1, n-i+1)
		sink(a, 1, n-i)
	a.pop(0)

def sink(a, i, n):
	lc = 2*i
	if lc > n:
		return
	rc = lc+1
	mc = 0
	if rc > n:
		mc = lc
	elif a[lc] > a[rc]:
		mc = lc
	else:
		mc = rc
	if a[i] >= a[mc]:
		return
	util.swap(a, i, mc)
	sink(a, mc, n)
