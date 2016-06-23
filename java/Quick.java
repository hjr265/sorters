public class Quick {
	public static void sort(int a[]) {
		sort(a, 0, a.length);
	}

	private static void sort(int a[], int l, int n) {
		if(n <= 1)
			return;
		Util.swap(a, l, l+(int)(Math.random()*n));
		int k = l;
		for(int i = l+1; i < l+n; i++) {
			if(a[i] < a[l])
				Util.swap(a, ++k, i);
		}
		Util.swap(a, l, k);
		sort(a, l, k-l);
		sort(a, k+1, l+n-k-1);
	}
}
