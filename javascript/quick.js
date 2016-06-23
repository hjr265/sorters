var swap = require('./util').swap

// quick implements quick sort algorithm. The function takes an array.
function quick(a) {
	_quick(a, 0, a.length)
}

function _quick(a, l, n) {
	if(n <= 1)
		return;
	swap(a, l, l+Math.floor(Math.random()*n))
	var k = l;
	for(var i = l+1; i < l+n; i++) {
		if(a[i] < a[l])
			swap(a, ++k, i)
	}
	swap(a, l, k)
	_quick(a, l, k-l)
	_quick(a, k+1, l+n-k-1)
}

module.exports = quick
