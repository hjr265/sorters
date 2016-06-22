package main

import (
	"math/rand"
)

// quick3 implements quick sort (3 way) algorithm. The function takes an array and its length.
func quick3(a []int) {
	if len(a) <= 1 {
		return
	}
	r := rand.Intn(len(a))
	a[len(a)-1], a[r] = a[r], a[len(a)-1]
	i, k, p := 0, 0, len(a)
	for i < p {
		if a[i] < a[len(a)-1] {
			a[i], a[k] = a[k], a[i]
			i++
			k++
		} else if a[i] == a[len(a)-1] {
			p--
			a[i], a[p] = a[p], a[i]
		} else {
			i++
		}
	}
	m := min(p-k, len(a)-p+1)
	for i := 0; i < m-1; i++ {
		a[k+i], a[len(a)-m+1+i] = a[len(a)-m+1+i], a[k+i]
	}
	quick3(a[:k])
	quick3(a[k+1:])
}
