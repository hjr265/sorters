package main

import (
	"math/rand"
)

// quick implements quick sort algorithm. The function takes an array and its length.
func quick(a []int) {
	if len(a) <= 1 {
		return
	}
	r := rand.Intn(len(a))
	a[0], a[r] = a[r], a[0]
	k := 0
	for i := 1; i < len(a); i++ {
		if a[i] < a[0] {
			k++
			a[k], a[i] = a[i], a[k]
		}
	}
	a[0], a[k] = a[k], a[0]
	quick(a[:k])
	quick(a[k+1:])
}
