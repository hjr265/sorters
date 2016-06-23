public class Quick3 {
	public static void sort(int a[]) {
		sort(a, 0, a.length);
	}

	private static void sort(int a[], int l, int n) {
		if(n <= 1)
			return;
		Util.swap(a, l+n-1, l+(int)(Math.random()*n));
		int i = l, k = l, p = l+n;
		while(i < p) {
			if(a[i] < a[l+n-1])
				Util.swap(a, i++, k++);
			else if(a[i] == a[l+n-1])
				Util.swap(a, i, --p);
			else
				i++;
		}
		int m = Math.min(p-k, l+n-p+1);
		for(int j = 0; j < m-1; j++)
			Util.swap(a, k+j, l+n-m+1+j);
		sort(a, l, k-l);
		sort(a, k+1, l+n-k-1);
	}
}
