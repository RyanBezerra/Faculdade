import java.util.Scanner;

public class SomSubMultDiv {

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		System.out.println("Digite o primeiro número:");
		int primeiro = entrada.nextInt(); 	
		System.out.println("Digite o segundo número:");
		int segundo = entrada.nextInt();
		System.out.println("A soma dos números é: " + (primeiro + segundo));
		System.out.println("A subtração dos números é: " + (primeiro - segundo));
		System.out.println("A multiplicação dos números é: " + (primeiro * segundo));
		System.out.println("A divisão dos números é: " + (primeiro / segundo));
		entrada.close();
	}

}
