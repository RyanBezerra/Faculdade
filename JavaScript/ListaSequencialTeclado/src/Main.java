import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int online = 1;
		Scanner teclado = new Scanner(System.in);
		
		Lista listaAlunos = new Lista();

		while(online==1){

			System.out.println("O que voce quer fazer?\n"
					+ "1 - Listar Alunos\n"
					+ "2 - Inserir um Aluno na lista\n"
					+ "3 - Excluir um Aluno da lista\n"
					+ "4 - Buscar por um Aluno na lista\n"
					+ "0 - Sair");

			int escolha = teclado.nextInt();

			switch (escolha) {

				case 0: {
	
					online = 0;
					break;
				}

				case 1: {

					listaAlunos.mostraAlunos();
					break;
				}


				case 2: {

					System.out.println("Digite o RGM do aluno a ser inserido:");

					int insercao = teclado.nextInt();
					int rgmASerInserido = insercao;

					if (rgmASerInserido == -1) {
						System.out.println("Opcao invalida! reinicie a aplicacao e insira uma opcao correta.");
					}

					System.out.println("Agora insira o Nome do Aluno:");
					teclado.nextLine();
					String nomeNewAluno = teclado.nextLine();

					listaAlunos.inserirAluno(rgmASerInserido, nomeNewAluno);
					break;

				}


				case 3: {

					System.out.println("Qual posição a do aluno que voce quer excluir?");
					int resposta = teclado.nextInt();
					int excluir = resposta - 1;
					listaAlunos.excluirAluno(excluir);
					break;

				}
 

				case 4: {

					System.out.println("Digite o RGM do aluno do qual voce deseja ver os dados");
					int buscaResposta = teclado.nextInt();
					int buscaMatricula = buscaResposta;
					if (buscaMatricula == -1)
						System.out.println("Opcao invalida! reinicie a aplicacao e insira uma opcao correta.");
					else
						listaAlunos.buscaRGM(buscaMatricula);
					break;
				}

				default: {

					System.out.println("Opcao invalida! reinicie a aplicacao e insira uma opcao correta.");

				}
			}
		}
		System.out.println("Encerrando...");
		teclado.close();
	}
}

