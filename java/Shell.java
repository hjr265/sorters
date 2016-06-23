public class Shell {
	public static void sort(int a[]) {
		int h = 0;
		while(h < a.length)
			h = 3*h+1;
		while(h > 0) {
			h = h/3;
			for(int k = 0; k < h; k++) {
				for(int j = 0; j < a.length/h; j += a.length/h)
					insertion(a, j, a.length/h-j);
			}
		}
	}

	private static void insertion(int a[], int l, int n) {
		for(int i = l+2; i < l+n; i++) {
			for(int k = i; k > l && a[k] < a[k-1]; k--)
				Util.swap(a, k, k-1);
		}
	}
}
