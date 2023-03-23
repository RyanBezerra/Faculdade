
public class Principal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Lista listasequencial = new Lista();
		
		System.out.println("A lista esta vazia? "+ listasequencial.estaVazia());
		System.out.println("A lista esta cheia? "+ listasequencial.estaCheia());
		System.out.println("A lista tem "+ listasequencial.tamanhoLista() +" elementos");
		
		// criando objetos Contato
		Contato c1 = new Contato();
		c1.nome = "Joao";
		c1.telefone = "1111-1111";
		
		Contato c2 = new Contato();
		c2.nome = "Maria";
		c2.telefone = "2222-2222";
		
		Contato c3 = new Contato();
		c3.nome = "Jose";
		c3.telefone = "3333-3333";
		
		// inserindo objetos na lista sequencial
		listasequencial.inserirContato(0, c1);
		listasequencial.inserirContato(1, c2);
		listasequencial.inserirContato(2, c3);
		
		listasequencial.exibirLista();
		
		Contato removido = listasequencial.removerContato(0);
		System.out.println("O contato removido foi o "+removido.getNome());
		
		System.out.println("Nome do elemento da 2a posicao e: "+listasequencial.buscar(1).nome);
		
		System.out.println("Posicao do contato Maria e: "+listasequencial.retornarPosicao(c2));
	}

}
