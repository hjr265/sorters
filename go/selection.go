package main

// selection implements selection sort algorithm. The function takes an array and its length.
func selection(a []int) {
	for i := 0; i < len(a); i++ {
		k := i
		for j := i + 1; j < len(a); j++ {
			if a[j] < a[k] {
				k = j
			}
		}
		a[i], a[k] = a[k], a[i]
	}
}
