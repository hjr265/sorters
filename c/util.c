void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int min(int a, int b) {
	if(a < b)
		return a;
	return b;
}
