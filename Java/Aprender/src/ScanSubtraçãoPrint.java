import java.util.Scanner;

public class ScanSubtraçãoPrint {

	public static void main(String[] args) {
		System.out.println("Digite o ano que nasceu:");
		Scanner entrada = new Scanner(System.in);
		
		int ano = entrada.nextInt();
		System.out.println("Sua idade: " + (2023-ano)); 
		entrada.close();
	}

}
