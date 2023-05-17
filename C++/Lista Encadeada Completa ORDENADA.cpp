#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

// Tipo base dos elementos da lista 
typedef struct elementos {
    char nome[50];
    // Outros elementos
} t_elemento;


// Estrutura lista
typedef struct no {
    t_elemento dado;  // elemento contendo os dados
    struct no * prox; // ponteiro para o proximo elemento
} t_no; // tipo da estrutura

// define t_lista como sendo um outro nome para "t_no *"
typedef t_no * t_lista;  


/**
 * Cria um novo no, aloca a sua regiao de memoria,
 * inicializa o ponteiro prox, e retorna o ponteiro o no criado.
 * 
 * @return No alocada e inicializada
 */
t_no * criaNo() {
    t_no * no = (t_no *) malloc(sizeof(t_no));

    if (no)
        no->prox = NULL;

    return no;
}

/**
 * Verifica se a lista esta vazia ou nao. Isto so acontece quando ela eh nula
 * 
 * @param lista ponteiro para a lista
 *
 * @return Verdadeiro (1) se a lista estiver vazia, ou falso (0) caso contrario.
 */
int isVazia(t_lista l) {
    return (l == NULL);
}

/**
 * Percorre toda a lista, e obtem o tamanho atual.
 * 
 * @param lista ponteiro para a lista.
 *
 * @return o quantidade de elementos que estao na lista.
 */
int getTamanho(t_lista l) {
    int n = 0;
    
    while (l != NULL) {
        n++;
        l = l->prox;
    }
    return n;
}

/**
 * Percorre toda a lista ate chegar na posicao desejada, em seguida retorna
 * o endereco do no atual.
 * 
 * @param lista ponteiro para a lista
 * @param pos   posicao do no desejado
 * @see getElemento()
 *
 * @return ponteiro para o elemento desejado, caso a posicao seja invalida retorna 0.
 */
t_no * getNo(t_lista l, int pos) {
    // Retorna 0 se posicao invalida. Do contrario, retorna o elemento
    int n = 0;

    if (pos < 0)
        return 0; // erro: posicao invalida

    while (l != NULL) {
        if (n == pos)
            return l;
            
        n++;
        l = l->prox;
    }
    return 0; // erro: posicao invalida
}

/**
 * Obtem um elemento da lista especificado por pos. Utiliza a funcao getNo(),
 * para obter o no, e em seguida extrair o elemento do no.
 * 
 * @param lista ponteiro para a lista
 * @param pos   posicao do elemento desejado
 *
 * @see getNo()
 *
 * @return ponteiro para o elemento desejado, caso a posicao seja invalida retorna 0.
 */
t_elemento * getElemento(t_lista l, int pos)
{
    t_no * no = getNo(l, pos);
    
    if (no != NULL)
        return &(no->dado);
    else
        return NULL;
}

/**
 * Obtem a posicao de um elemento, a partir de seu valor.
 * 
 * @param lista ponteiro para a lista
 * @param dado  t_elemento a ser buscado na lista
 *
 * @return a posicao do elemento, ou -1 se o elemento nao estiver na lista.
 */

int compara(t_elemento dado1, t_elemento dado2) {
    return strcmp(dado1.nome, dado2.nome);
}

int getPosicao(t_lista l, t_elemento dado) {
	
	printf("\ngetPosicao %s\n", dado.nome);
	
    int n = 0;
    
    while (l != NULL) {
        if (compara(l->dado, dado)==0)
            return n;
            
        n++;
        l = l->prox;
    }
    return -1;
}

/**
 * Insere um elemento (dado) em determinada posicao da lista.
 * 
 * @param lista ponteiro para a lista
 * @param pos   posicao que o elemento que sera inserido ficara.
 * @param dado  elemento a ser inserido
 *
 * @return Falso(0) se a posição for invalida ou se a lista estiver cheia, caso contrario, retorna Verdadeiro(1).
 */
int inserir(t_lista * l, int pos, t_elemento dado) {
    t_no * p, * novo;

    // inserção na primeira posicao ou em lista vazia
    if (pos == 0) {
        novo = criaNo();
        
        if (novo == NULL)
            return 0; // erro: memoria insuficiente
            
        novo->dado = dado;
        novo->prox = *l;
        
        *l = novo;
        
        return 1;
    }
    // insercao apos a primeira posicao em lista nao vazia
    p = getNo(*l, pos - 1);
    if (p == NULL)
         return 0; // erro: posicao invalida 
         
    novo = criaNo();
    if (novo == NULL)
        return 0; // erro: memoria insuficiente
        
    novo->dado = dado;
    novo->prox = p->prox;
    p->prox = novo;

    return 1;
}

/**
 * Remove um elemento de determinada posicao da lista.
 *
 * @param lista ponteiro para a lista, a lista ja deve ter sido inicializada
 * @param pos   posicao do elemento a ser removido
 *
 * @return Falso(0) se a posição for invalida ou se a lista estiver cheia, caso contrario, retorna Verdadeiro(1)
 */
int remover(t_lista * l, int pos) {
    t_no * anterior,  * aux;
    
    if (isVazia(*l) || pos < 0)
		return 0; // erro: lista vazia ou posição inválida
    
    if (pos == 0) { // remocao da primeira posicao em lista nao vazia
        aux = *l;
        *l = aux->prox;
    } else { // remocao em qualquer posicao
        anterior = getNo(*l, pos-1);
        if (anterior == NULL)
            return 0; // erro: posicao invalida
            
        aux = anterior->prox;
        if (aux == NULL)
            return 0; // erro: posicao invalida
            
        anterior->prox = aux->prox;
    }
    free(aux);
    
    return 1;
}

/**
 * Obtem a posicao para que um elemento seja inserido em ordem crescente na lista.
 *
 * @param lista ponteiro para a lista
 * @param dado  t_elemento a ser buscado na lista
 *
 * @return a posicao para que o elemento seja inserido em ordem crescente na lista.
 */
int getPosicaoInsercaoOrdenada(t_lista l, t_elemento dado) {
    int n = 0;
    
    while (l != NULL) {
        if (compara(l->dado, dado) >= 0)
            return n;
            
        n++;
        l = l->prox;
    }

    // lista vazia, ou nao achou elemento, retorna posicao zero
    return n;
}

// percorre e mostra conteudo da lista
void	mostra(t_lista l)
{
	while (l != NULL)
	{
		printf("%s     ", l->dado.nome);
		l = l->prox;
	}
}

void mostraLista(t_lista l)
{
	int cnt = 0;
	
	while(l != NULL) {
		printf("Elemento [%d] tem [%s]\n", ++cnt, l->dado.nome);
		l = l->prox;
	}
	
	if(!cnt)
		printf("Lista vazia\n");
}

int	main()
{
	int opt, posOrdenada, i;
	int	cnt = 0;
	t_elemento mElem;
	t_lista	mLista = NULL;
	t_no *	mNo;
	t_lista	aux = NULL;

	for (i = 0; i < 5; i++) {
		
		printf("digite o nome\n");
		scanf("%s", &(mElem.nome));
		
		posOrdenada = getPosicaoInsercaoOrdenada(mLista, mElem);
		inserir(&mLista, posOrdenada, mElem);
	}

	mostraLista(mLista); 
	
	printf("digite o nome a ser removido\n");
	scanf("%s", &(mElem.nome));	
	
	posOrdenada = getPosicao(mLista, mElem);
	remover(&mLista, posOrdenada);
	
	mostraLista(mLista);
	
	int ini, fim; 
	
	printf("Digite o inicio e o fim do intervalo a ser removido\n");
	scanf("%d %d", &ini, &fim);
	
	i = --ini;
	for ( ; ini <= fim; ini++)
		remover(&mLista, i);

	mostraLista(mLista);
}

