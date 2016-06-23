public class Heap {
	public static void sort(int a[]) {
		int h[] = new int[a.length+1];
		for(int i = 0; i < a.length; i++) {
			h[i+1] = a[i];
		}
		for(int i = a.length/2; i >= 1; i--)
			sink(h, i, a.length);
		for(int i = 1; i <= a.length; i++) {
			Util.swap(h, 1, a.length-i+1);
			sink(h, 1, a.length-i);
		}
		for(int i = 0; i < a.length; i++) {
			a[i] = h[i+1];
		}
	}

	static void sink(int a[], int i, int n) {
		int lc = 2*i;
		if(lc > n)
			return;
		int rc = lc+1;
		int mc = (rc > n) ? lc : (a[lc] > a[rc] ? lc : rc);
		if(a[i] >= a[mc])
			return;
		Util.swap(a, i, mc);
		sink(a, mc, n);
	}
}
