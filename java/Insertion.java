public class Insertion {
	public static void sort(int a[]) {
		for(int i = 2; i < a.length; i++) {
			for(int k = i; k > 0 && a[k] < a[k-1]; k--)
				Util.swap(a, k, k-1);
		}
	}
}
