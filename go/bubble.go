package main

// bubble implements bubble sort algorithm. The function takes an array and its length.
func bubble(a []int) {
	for i := 0; i < len(a); i++ {
		swapped := false
		for j := len(a) - 1; j > i; j-- {
			if a[j] < a[j-1] {
				a[j], a[j-1] = a[j-1], a[j]
				swapped = true
			}
		}
		if !swapped {
			break
		}
	}
}
