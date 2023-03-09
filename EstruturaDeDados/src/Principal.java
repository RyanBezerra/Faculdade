public class Principal {

	public static void main(String[] args) {
		Lista listasequencial = new Lista();
		System.out.println("A lista está vazia? " + listasequencial.estaVazia());
		System.out.println("A lista está cheia? " + listasequencial.estaCheia());
		System.out.println("A lista tem " + listasequencial.tamanhoLista() + " elementos");
		
		ListaSequencial c1 = new ListaSequencial();
		c1.nome = "Goku";
		c1.telefone = "1111-1111";
		
		ListaSequencial c2 = new ListaSequencial();
		c2.nome = "Gohan";
		c2.telefone = "2222-2222";
		
		ListaSequencial c3 = new ListaSequencial();
		c3.nome = "Goten";
		c3.telefone = "3333-3333";
		
		ListaSequencial c4 = new ListaSequencial();
		c4.nome = "Bulma";
		c4.telefone = "4444-4444";
		
		listasequencial.inserirContato(0, c1);
		listasequencial.inserirContato(1, c2);
		listasequencial.inserirContato(2, c3);
		listasequencial.inserirContato(3, c4);
		listasequencial.inserirContato(2, c4);
		
		listasequencial.exibirLista();
		
		listasequencial.remover(0);
		
		System.out.println("Nome do elemento da terceira posição é " + listasequencial.buscar(2).nome);
		System.out.println("Posição do contato Gohan é " + listasequencial.retornarPosicao(c2));
	}

}
