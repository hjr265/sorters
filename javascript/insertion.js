var swap = require('./util').swap

// insertion implements insertion sort algorithm. The function takes an array.
function insertion(a) {
	for(var i = 2; i < a.length; i++) {
		for(var k = i; k > 0 && a[k] < a[k-1]; k--)
			swap(a, k, k-1);
	}
}

module.exports = insertion
