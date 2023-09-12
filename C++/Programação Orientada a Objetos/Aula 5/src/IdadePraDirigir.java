import java.util.Scanner;

public class IdadePraDirigir {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		int idade;
		
		System.out.println("Digite sua idade: ");
		
		idade = entrada.nextInt();
		if(idade >= 18) {
			System.out.println("pode dirigir!");
		}else {
			System.out.println("Não pode dirigir!");
		}
		entrada.close();
	}

}
