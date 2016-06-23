public class Selection {
	public static void sort(int a[]) {
		for(int i = 0; i < a.length; i++) {
			int k = i;
			for(int j = i+1; j < a.length; j++) {
				if(a[j] < a[k])
					k = j;
			}
			Util.swap(a, i, k);
		}
	}
}
