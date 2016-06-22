package main

// heap implements heap sort algorithm. The function takes an array and its length.
func heap(a []int) {
	h := append([]int{0}, a...)
	for i := len(a) / 2; i >= 1; i-- {
		sink(h, i, len(a))
	}
	for i := 1; i <= len(a); i++ {
		h[1], h[len(a)-i+1] = h[len(a)-i+1], h[1]
		sink(h, 1, len(a)-i)
	}
	for i := 0; i < len(a); i++ {
		a[i] = h[i+1]
	}
}

func sink(a []int, i int, n int) {
	lc := 2 * i
	if lc > n {
		return
	}
	rc := lc + 1
	mc := 0
	if rc > n {
		mc = lc
	} else if a[lc] > a[rc] {
		mc = lc
	} else {
		mc = rc
	}
	if a[i] >= a[mc] {
		return
	}
	a[i], a[mc] = a[mc], a[i]
	sink(a, mc, n)
}
