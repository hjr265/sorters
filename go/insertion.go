package main

// insertion implements insertion sort algorithm. The function takes an array and its length.
func insertion(a []int) {
	for i := 2; i < len(a); i++ {
		for k := i; k > 0 && a[k] < a[k-1]; k-- {
			a[k], a[k-1] = a[k-1], a[k]
		}
	}
}
