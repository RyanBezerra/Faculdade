
public class Lista extends Contato {

	Contato[] contatos = new Contato[100];
	int tamanho = 0;
	
	public boolean estaVazia() {
		return(tamanho == 0);
	}
	
	public boolean estaCheia() {
		return(tamanho == contatos.length);
	}
	
	public int tamanhoLista() {
		return(tamanho);
	}
	
	public Contato buscar(int pos) {
		// verifica se pos e valida
		if (pos < 0 || pos >= tamanho)
			return null;
		
		return contatos[pos];
	}
	
	public boolean Compara(Contato c1, Contato c2) {
		return(c1.nome.equals(c2.nome)) && (c1.telefone.equals(c2.telefone));
	}
	
	public int retornarPosicao(Contato contato) {
		for (int i = 0; i <= tamanho; i++)
			if (Compara(contatos[i], contato))
				return i;
		return -1;
	}
	
	public void deslocarParaDireita(int pos) {
		for (int i = tamanho; i > pos; i--)
			contatos[i] = contatos[i - 1];
	}
	
	public boolean inserirContato (int pos, Contato c1) {
		if (estaCheia() || (pos > tamanho) || (pos < 0))
			return false;
		deslocarParaDireita(pos);
		contatos[pos] = c1;
		tamanho++;
		return true;
	}
	
	public void deslocarParaEsquerda(int pos) {
		for (int i = pos; i < (tamanho - 1); i++)
			contatos[i] = contatos[i + 1];
	}
	
/*	public boolean removerContato (int pos) {
		if ((pos > tamanho) || (pos < 0))
			return false;
		deslocarParaEsquerda(pos);
		tamanho--;
		return true;
	}
	*/
	public Contato removerContato (int pos) {
		if ((pos > tamanho) || (pos < 0))
			return null;
		Contato aux = contatos[pos];
		deslocarParaEsquerda(pos);
		tamanho--;
		return aux;
	}
	
	public void exibirLista() {
		for (int i = 0; i < tamanho; i++)
			System.out.println(	"\nContato " +(i + 1)
								+"\nNome: " +contatos[i].nome
								+"\nTelefone: "+contatos[i].telefone);
	}
	
	
}
