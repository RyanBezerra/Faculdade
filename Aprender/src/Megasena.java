import java.util.ArrayList;

public class Megasena {

	public static void main(String[] args) {
		
		int total = 0;
//		int[] numeros = new int[6];
		ArrayList<Integer> numeros = new ArrayList<Integer>();
		while (total < 6) {
			int n = (int) (Math.random() * 60);
			if (numeros.contains(n)) {
				continue;
			} else {
				numeros.add(n);
				total++;
			}
		}
		
		for (int n: numeros) { 
			System.out.println(n + " ");
		}
		
	}

}
