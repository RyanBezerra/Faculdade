
public class Lista {
	Aluno	primeiro = null;
	Aluno	ultimo = null;
	int		tamanho = 0;
	
	public boolean estaVazia() {
		if (tamanho == 0)
			return true;
		
		return false;
	}
	public int tamanhoDaLista() {
		return (tamanho);
	}
	
	public void inserirAlunoInicio(Aluno a) {
		if (estaVazia())
			primeiro = ultimo = a;
		else {
			a.proximo = primeiro;
			primeiro = a;
		}
		tamanho++;
	}
	
	public void inserirNoFim(Aluno a) {
		if (estaVazia())
			primeiro = ultimo = a;
		else {
			ultimo.proximo = a;
			ultimo = a;
		}
		tamanho++;
	}
	
	public void inserirNaPosicao(Aluno a, int pos) {
		// vamos assumir que as posições vão de ZERO até N
		// perguntar se a posicao é valida: entre o inicio e o fim
		// qtd -> 3 
		// insiri na pos = 4 -> inserir no final
		//inserir na pos = 7 -> erro pos > qtd
//		if (pos < 0 || pos > tamanho + 1) // erro
			// erro
//		aux = primeiro;
//		aux = aux.prox; pos - 1 vezes
//		a.proximo = aux.prox;
//		aux.prox = a;

		
		
	}
	
	public void exibirLista() {
		Aluno temp = primeiro;
		if (!estaVazia()) {
			for (int i = 0; i < tamanho; i++) {
				System.out.println("Aluno "+i+" | nome: "+temp.nome+" | idade: "+temp.idade);
				temp = temp.proximo;
			}
		}
	}
	
	public void removerAlunoPorNome(String nomeprocurado) {
		if (tamanho == 0) {
			System.out.println("Lista está vazia");
			return;
		}
		
		if (tamanho == 1) {
			if (primeiro.nome.equals(nomeprocurado)) {
					primeiro = ultimo = null;
					tamanho--;
					return;
			}
			else {
				System.out.println("O nome "+nomeprocurado+" não está na lista.");
				return;
			}
		}
		
		Aluno alunodafrente = primeiro;
		Aluno alunodetras = null;
		
		for (int i = 0; i < tamanho; i++) {
			if (nomeprocurado.equals(alunodafrente.nome)) {
				if (i == 0) {
					System.out.println("O primeiro da lista é o procurado e será removido.");
					primeiro = primeiro.proximo;
					tamanho--;
					return;
				}
				else {
					alunodetras.proximo = alunodafrente.proximo;
					tamanho--;
					return;
				}
			}
			else {
				alunodetras = alunodafrente;
				alunodafrente = alunodafrente.proximo;
			}
		}
		
		System.out.println("Aluno "+nomeprocurado+" não está na lista");
		return;
	}

}
