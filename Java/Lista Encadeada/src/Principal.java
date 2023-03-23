
public class Principal {

	public static void main(String[] args) {
		
		Lista listaencadeada = new Lista();
		System.out.println("A lista está vazia? "+listaencadeada.estaVazia());
		
		Aluno a1 = new Aluno();
		a1.setNome("João Luiz");
		a1.setIdade("10");
		
		Aluno a2 = new Aluno();
		a2.setNome("Ana Luiza");
		a2.setIdade("17");
		
		listaencadeada.inserirAlunoInicio(a1);
		listaencadeada.inserirNoFim(a2);
		
		System.out.println("");
		System.out.println("A lista tem "+listaencadeada.tamanhoDaLista()+" elementos.");
		System.out.println("Elementos da lista: ");
		listaencadeada.exibirLista();
		
		Aluno a3 =  new Aluno();
		a3.setNome("Luiza Santos");
		a3.setIdade("18");
		
		Aluno a4 = new Aluno();
		a4.setNome("João Marcos");
		a4.setIdade("21");
		
		listaencadeada.inserirAlunoInicio(a3);
		listaencadeada.inserirAlunoInicio(a4);

		System.out.println("");
		System.out.println("Agora a lista tem "+listaencadeada.tamanhoDaLista()+" elementos.");
		System.out.println("Elementos da lista ampliada: ");
		listaencadeada.exibirLista();

		System.out.println("");
		listaencadeada.removerAlunoPorNome("João Marcos");

		System.out.println("Aluno João Marcos foi removido.");
		System.out.println("Lista atualizada: ");
		listaencadeada.exibirLista();		

		System.out.println("");
		listaencadeada.removerAlunoPorNome("Ana Luiza");
		
		System.out.println("Aluna Ana Luiza foi removida.");
		System.out.println("Lista atualizada: ");
		listaencadeada.exibirLista();		

		System.out.println("");
		listaencadeada.removerAlunoPorNome("Santos Silva");

	}

}
