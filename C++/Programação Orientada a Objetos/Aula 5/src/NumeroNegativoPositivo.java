import java.util.Scanner;

public class NumeroNegativoPositivo {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		int numero; 
		
		System.out.println("Digite um numero");
		
		numero = entrada.nextInt();
		
		if(numero >=0) {
			System.out.println("Esse numero é positivo");
		} else if(numero<0) {
			System.out.println("Esse numero é negativo");
		}
		entrada.close();

	}

}
