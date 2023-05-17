import java.util.Scanner;

public class ScanString {

	public static void main(String[] args) {
		System.out.println("Digite seu nome:");
		Scanner teclado = new Scanner(System.in);
		String nome = teclado.nextLine(); 	
		System.out.println("Boa noite " + nome + ". \nVocê já é um mestre pokémon?");
		teclado.close();
	}
}
