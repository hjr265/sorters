package main

// merge implements merge sort algorithm. The function takes an array and its length.
func merge(a []int) {
	if len(a) <= 1 {
		return
	}
	m := len(a) / 2
	merge(a[:m])
	merge(a[m:])
	b := append([]int{}, a...)
	i, j, k := 0, m, 0
	for i < m && j < len(a) {
		if a[j] < b[i] {
			a[k] = a[j]
			k++
			j++
		} else {
			a[k] = b[i]
			k++
			i++
		}
	}
	for i < m {
		a[k] = b[i]
		k++
		i++
	}
}
