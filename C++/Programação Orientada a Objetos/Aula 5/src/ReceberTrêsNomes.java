import java.util.Scanner;

public class ReceberTrêsNomes {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		String Nome1, Nome2, Nome3, maior;
		
		System.out.println("Digite o primeiro nome: ");
		Nome1 = entrada.nextLine();
		System.out.println("Digite o segundo nome: ");
		Nome2 = entrada.nextLine();
		System.out.println("Digite o terceiro nome: ");
		Nome3 = entrada.nextLine();
		
		if (Nome1.compareTo(Nome2)>0) {maior = Nome1;}
		else { maior = Nome2; }
		
		if (maior.compareTo(Nome3)>0) {}
		else {maior = Nome3;}
		
		System.out.println("O nome mais proximo de z ê: "+maior);
		
		entrada.close();
		
	}

}
