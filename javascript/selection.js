var swap = require('./util').swap

// selection implements selection sort algorithm. The function takes an array.
function selection(a) {
	for(var i = 0; i < a.length; i++) {
		var k = i
		for(var j = i+1; j < a.length; j++) {
			if(a[j] < a[k])
				k = j
		}
		swap(a, i, k)
	}
}

module.exports = selection
