import java.util.Scanner;

public class MediaAprovadoFinalReprovado {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		int media;
		
		System.out.println("Digite sua média: ");
		
		media = entrada.nextInt();
		
		if(media >=7) {
			System.out.println("Aprovado");
			
		} else if (media >=4) {
			System.out.println("Prova Final");
		
		} else {
			System.out.println("Reprovou");
			
			entrada.close();
		}
	}
	
}



