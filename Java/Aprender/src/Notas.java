import java.util.Scanner;

public class Notas {

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		System.out.println("Digite a primeira nota:");
		String primeira = entrada.nextLine(); 	
		double primeiro = Double.parseDouble(primeira);
		System.out.println("Digite a segunda nota:");
		String segunda = entrada.nextLine();
		double segundo = Double.parseDouble(segunda);
		System.out.println("Digite a terceira nota:");
		String terceira = entrada.nextLine();
		double terceiro = Double.parseDouble(terceira);
		
		double media = (primeiro + segundo + terceiro) / 3;
		System.out.println("Média: " + media);
		entrada.close();
	}

}