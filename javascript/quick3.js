var swap = require('./util').swap

// quick3 implements quick sort (3 way) algorithm. The function takes an array.
function quick3(a) {
	_quick3(a, 0, a.length)
}

function _quick3(a, l, n) {
	if(n <= 1)
		return;
	swap(a, l+n-1, l+Math.floor(Math.random()*n))
	var i = l, k = l, p = l+n
	while(i < p) {
		if(a[i] < a[l+n-1])
			swap(a, i++, k++)
		else if(a[i] == a[l+n-1])
			swap(a, i, --p)
		else
			i++;
	}
	var m = Math.min(p-k, l+n-p+1)
	for(var i = 0; i < m-1; i++)
		swap(a, k+i, l+n-m+1+i)
	_quick3(a, l, k-l)
	_quick3(a, k+1, l+n-k-1)
}

module.exports = quick3
