var swap = require('./util').swap

// bubble implements bubble sort algorithm. The function takes an array.
function bubble(a) {
	for(var i = 0; i < a.length; i++) {
		var swapped = false
		for(var j = a.length-1; j > i; j--) {
			if(a[j] < a[j-1]) {
				swap(a, j, j-1)
				swapped = true
			}
		}
		if(!swapped) {
			break
		}
	}
}

module.exports = bubble
