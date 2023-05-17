import java.util.Scanner;

public class Ternário {

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		System.out.println("Digite o primeiro número:");
		int primeiro = entrada.nextInt(); 	
		System.out.println("Digite o segundo número:");
		int segundo = entrada.nextInt();
		System.out.println("Digite o terceiro número:");
		int terceiro = entrada.nextInt();
		
		int submenor = (primeiro < segundo)  ? primeiro : segundo; 
		int menor = (submenor < terceiro) ? submenor : terceiro;
		System.out.println("O maior número é: " + menor);
		entrada.close();
	}

}
