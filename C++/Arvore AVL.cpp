#include <iostream>

struct No {
    int chave;
    No* esquerda;
    No* direita;

    No(int k) : chave(k), esquerda(nullptr), direita(nullptr) {}
};

No* rotacao_direita(No* no_desbalanceado) {
    if (no_desbalanceado && no_desbalanceado->esquerda) {
        No* a = no_desbalanceado;
        No* b = no_desbalanceado->esquerda;
        No* c = b->direita;

        b->direita = a;
        a->esquerda = c;

        return b;
    } else {
        return no_desbalanceado;
    }
}

void imprimir_em_ordem(No* raiz) {
    if (raiz) {
        imprimir_em_ordem(raiz->esquerda);
        std::cout << raiz->chave << " ";
        imprimir_em_ordem(raiz->direita);
    }
}

int main() {
    No* A = new No(2);
    No* B = new No(1);
    No* C = new No(3);

    A->esquerda = B;
    B->esquerda = C;

    std::cout << std::endl;

    No* nova_raiz = rotacao_direita(A);

    std::cout << std::endl;

    delete A;
    delete B;
    delete C;

    return 0;
}
