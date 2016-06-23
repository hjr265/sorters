public class Merge {
	public static void sort(int a[]) {
		sort(a, 0, a.length);
	}

	private static void sort(int a[], int l, int n) {
		if(n <= 1)
			return;
		int m = n/2;
		sort(a, l, m);
		sort(a, l+m, n-m);
		int b[] = new int[n];
		for(int i = 0; i < n; i++) {
			b[i] = a[l+i];
		}
		int i = 0, j = l+m, k = l;
		while(i < m && j < l+n) {
			if(a[j] < b[i])
				a[k++] = a[j++];
			else
				a[k++] = b[i++];
		}
		while(i < m) {
			a[k++] = b[i++];
		}
	}
}
