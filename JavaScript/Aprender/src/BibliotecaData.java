import java.time.LocalDate;
import java.util.Scanner;

public class BibliotecaData {

	public static void main(String[] args) {
		System.out.println("Digite o ano que nasceu:");
		Scanner entrada = new Scanner(System.in);
		LocalDate dataatual = LocalDate.now();
		int anoatual = dataatual.getYear();
		int ano = entrada.nextInt();
		System.out.println("Sua idade é: " + (anoatual-ano));
		entrada.close();
	}
}