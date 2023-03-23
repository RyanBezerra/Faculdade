#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include 	<locale.h>

#define	MAX 100

typedef struct cnt {
	char	nome[50];
	char	telefone[50];
} Contato;

typedef struct l {
	Contato	contatos[MAX];
	int	ultimo_contato;
} Lista;

Lista	criar() {
	Lista l;
	
	l.ultimo_contato = -1;
	
	return l;
}

int	isVazia(Lista * l){
	return (l->ultimo_contato == -1);
}

int	isCheia (Lista * l) {
	return (l->ultimo_contato == (MAX -1));
}

int	getQuantidade(Lista * l) {
	return (l->ultimo_contato + 1);
}

Contato * getContato(Lista * l, int pos) {
	if ((pos > l->ultimo_contato) || (pos < 0))
		return NULL;
		
	return &(l->contatos[pos]);
}

int getPosicao(Lista * l, char nome[]) {
	int	i;
	
	for (int i = 0; i <= l->ultimo_contato; i++) {
		if (strcmp(l->contatos[i].nome, nome) == 0)
			return i;
	}
			
	return -1;
}

int deslocaDireita(Lista * l, int pos) {
    int i;

    for (i = l->ultimo_contato + 1; i>pos; i--)
        l->contatos[i] = l->contatos[i-1];
}

int inserirPos (Lista * l, int pos, Contato dado) {
    if (isCheia(l) || (pos > l->ultimo_contato + 1) || (pos < 0))
        return 0;

    deslocaDireita(l, pos);
    l->contatos[pos] = dado;
    (l->ultimo_contato)++;
    return 1;
}

int deslocaEsquerda(Lista * l, int pos) {
    int i;

    for (i = pos; i < l->ultimo_contato ; i++)
        l->contatos[i] = l->contatos[i+1];
}

int removePos(Lista * l, int pos) {
    if ((pos > l->ultimo_contato) || (pos < 0))
        return 0;

    deslocaEsquerda(l, pos);
    (l->ultimo_contato)--;
    
    return 1;
}

int getPosicaoInsercaoOrdenada(Lista * l, char nome[]) {
    int i;
    
    for (i = 0; i <= l->ultimo_contato; i++) {
        if (strcmp(l->contatos[i].nome, nome) > 0)
            return i;
    }

    // inserir na última posição
    return i;
}

int inserirOrdenada (Lista * l, Contato dado) {
	int pos;
	
    if (isCheia(l))
        return 0;

	if (isVazia(l))
		pos = 0;
	else
	    pos = getPosicaoInsercaoOrdenada(l, dado.nome);
	
	inserirPos (l, pos, dado);	

    return 1;
}

void	mostrar(Lista * l){
	
	int i;
	
	printf("Minha lista de contatos\n");
	for(i = 0; i <= l->ultimo_contato; i++) {
		printf("Nome: %s\t", l->contatos[i].nome);
		printf("Telefone: %s\n", l->contatos[i].telefone);
	}
}

int	main() {
	setlocale(0,"Portuguese");
	
	Lista	myLista;
	Contato cont;
	int pos = 0;
	char resp = 's';
	
	myLista = criar();
	
	while(resp == 's') {
		printf("Nome:");
		gets(cont.nome);
		printf("Contato:");
		gets(cont.telefone);

		//inserirPos (&myLista, pos, cont);
		inserirOrdenada(&myLista, cont);
		pos++;
		
		printf("Deseja continuar s/n\n");
		resp = getchar();
		fflush(stdin);
	}
	
	// mostrar a lista toda
	mostrar(&myLista);
	
	// a lista esta vazia??
	printf("\n");
	if (isVazia(&myLista))
		printf("A lista esta vazia\n");
		
	// a lista esta cheeia??
	if (isCheia(&myLista))
		printf("A lista esta cheia?\n");
		
	// quantos contatos minha tem??
	printf("A lista tem %d contatos\n", getQuantidade(&myLista));
	
	// quem esta na posição 0??
	cont = *(getContato(&myLista, 0));
	printf("O contato da posicao %d e %s\n", 0, cont.nome);
	
	// apagar elemento da posição 1
	if (removePos(&myLista, 1) == 0)
		printf("Na posição 1 não tem nenhum contato\n");
	else
		printf("Contato da posição 1 foi removido\n");
		
	// mostrar a lista toda
	mostrar(&myLista);
	
	getchar();
}

