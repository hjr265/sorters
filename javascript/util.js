function swap(a, i, j) {
	var t = a[i];
	a[i] = a[j];
	a[j] = t;
}

module.exports = {
	swap: swap
}
