package main

// shell implements shell sort algorithm. The function takes an array and its length.
func shell(a []int) {
	h := 0
	for h < len(a) {
		h = 3*h + 1
	}
	for h > 0 {
		h = h / 3
		for k := 0; k < h; k++ {
			for j := 0; j < len(a)/h; j += len(a) / h {
				insertion(a[j : len(a)/h])
			}
		}
	}
}
