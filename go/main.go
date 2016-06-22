package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	rand.Seed(time.Now().Unix())

	a := []int{3, 5, 2, 5, 6, 4, 4, 7, 3, 5, 2, 5, 6, 4, 4, 7, 1, 0, 8, 9}
	shell(a)
	fmt.Println(a)
}
