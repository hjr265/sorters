public class Main {
	public static void main(String args[]) {
		int a[] = {3, 5, 2, 5, 6, 4, 4, 7, 3, 5, 2, 5, 6, 4, 4, 7, 1, 0, 8, 9};
		Quick3.sort(a);
		for(int i = 0; i < a.length; i++) {
			System.out.printf("%d ", a[i]);
		}
		System.out.println();
	}
}
