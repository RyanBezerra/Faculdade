import java.util.Scanner;

public class metodoEquals {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		String nome; 
		System.out.println("Digite um nome: ");
		nome = entrada.nextLine();
		
		if(nome.equals("Seiya")) System.out.println("Pegasus");
		else if(nome.equals("Ikki")) System.out.println("Fenix");
		else if(nome.equals("Hyoga")) System.out.println("Cisne");
		else if(nome.equals("Shyriu")) System.out.println("Dragão");
		else if(nome.equals("Shun")) System.out.println("Andromeda");
		else System.out.println("Cavaleiro Desconhecido");
		
		entrada.close();
		
	}

}
