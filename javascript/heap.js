var swap = require('./util').swap

// heap implements heap sort algorithm. The function takes an array.
function heap(a) {
	var n = a.length
	a.unshift(0)
	for(var i = n/2; i >= 1; i--)
		sink(a, i, n)
	for(var i = 1; i <= n; i++) {
		swap(a, 1, n-i+1)
		sink(a, 1, n-i)
	}
	a.shift()
}

function sink(a, i, n) {
	var lc = 2*i
	if(lc > n)
		return
	var rc = lc+1
	var mc = (rc > n) ? lc : (a[lc] > a[rc] ? lc : rc)
	if(a[i] >= a[mc])
		return
	swap(a, i, mc)
	sink(a, mc, n)
}

module.exports = heap
