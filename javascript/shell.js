var swap = require('./util').swap

// shell implements shell sort algorithm. The function takes an array.
function shell(a) {
	var h = 0
	while(h < a.length)
		h = 3*h+1
	while(h > 0) {
		h = Math.floor(h/3)
		for(var k = 0; k < h; k++) {
			for(var j = 0; j < Math.floor(a.length/h); j += Math.floor(a.length/h))
				_insertion(a, j, Math.floor(a.length/h)-j)
		}
	}
}

function _insertion(a, l, n) {
	for(var i = l+2; i < l+n; i++) {
		for(var k = i; k > l && a[k] < a[k-1]; k--)
			swap(a, k, k-1);
	}
}

module.exports = shell
