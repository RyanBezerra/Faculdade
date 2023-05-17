
public class Main_teste {

	public static void main(String[] args) {
		Lista listaAlunos = new Lista();
		
		listaAlunos.inserirAluno(123, "a");
		listaAlunos.inserirAluno(456, "b");
		listaAlunos.inserirAluno(789, "c");
		listaAlunos.inserirAluno(4, "d");
		listaAlunos.inserirAluno(5, "e");
		listaAlunos.mostraAlunos();
		listaAlunos.excluirAluno(3);
		listaAlunos.mostraAlunos();
	}
}
