import java.util.Scanner;

public class Testes {

	public static void main(String[] args) {
		
		final double SALÁRIOMÍNIMO = 937.00;
		System.out.println("Digite o seu salário:");
		
		Scanner entrada = new Scanner(System.in);
		double salario = entrada.nextInt();
		
		System.out.println("A diferença de salario é de " + (salario - SALÁRIOMÍNIMO) + " reais");
		entrada.close();
	}
}
