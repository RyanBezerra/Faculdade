import java.util.Scanner;

public class Scan {

	public static void main(String[] args) {
		System.out.println("Digite seu nome:");
		Scanner entrada = new Scanner(System.in);
		String nome = entrada.nextLine(); 	
		System.out.println("Seu nome: " + nome);
		entrada.close();
	}
}
