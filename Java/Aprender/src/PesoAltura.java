import java.util.Scanner;

public class PesoAltura {

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		System.out.println("Digite seu peso:");
		String peso = entrada.nextLine(); 	
		System.out.println("Digite sua altura:");
		String altura = entrada.nextLine();
		System.out.println("peso: " + peso);
		System.out.println("altura: " + altura);
		System.out.println("Peso: " + peso + " | " + "Altura: " + altura);
		entrada.close();
	}
}
