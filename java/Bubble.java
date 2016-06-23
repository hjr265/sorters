public class Bubble {
	public static void sort(int a[]) {
		for(int i = 0; i < a.length; i++) {
			boolean swapped = false;
			for(int j = a.length-1; j > i; j--) {
				if(a[j] < a[j-1]) {
					Util.swap(a, j, j-1);
					swapped = true;
				}
			}
			if(!swapped) {
				break;
			}
		}
	}
}
