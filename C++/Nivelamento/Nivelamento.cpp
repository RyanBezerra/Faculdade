#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato {
    char nome[100];
    char telefone[15];
};

void adicionarContato(struct Contato agenda[], int *numContatos) {
    if (*numContatos < 100) {
        printf("Digite o nome do contato: ");
        scanf(" %[^\n]", agenda[*numContatos].nome);
        printf("Digite o telefone do contato: ");
        scanf(" %[^\n]", agenda[*numContatos].telefone);
        (*numContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A agenda esta cheia. Nao e possivel adicionar mais contatos.\n");
    }
}

void listarContatos(struct Contato agenda[], int numContatos) {
    if (numContatos == 0) {
        printf("A agenda esta vazia.\n");
    } else {
        for (int i = 0; i < numContatos - 1; i++) {
            for (int j = 0; j < numContatos - i - 1; j++) {
                if (strcmp(agenda[j].nome, agenda[j + 1].nome) > 0) {
                    struct Contato temp = agenda[j];
                    agenda[j] = agenda[j + 1];
                    agenda[j + 1] = temp;
                }
            }
        }

        printf("Contatos em ordem alfabetica:\n");
        for (int i = 0; i < numContatos; i++) {
            printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
        }
    }
}

int main() {
    struct Contato agenda[100];
    int numContatos = 0;

    FILE *arquivo;
    arquivo = fopen("contatos.txt", "r");
    if (arquivo != NULL) {
        while (fscanf(arquivo, " %[^\n]\n %[^\n]\n", agenda[numContatos].nome, agenda[numContatos].telefone) == 2) {
            numContatos++;
        }
        fclose(arquivo);
    }

    while (1) {
        printf("Agenda Telefonica\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Sair\n");
        int opcao;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(agenda, &numContatos);
                break;
            case 2:
                listarContatos(agenda, numContatos);
                break;
            case 3:
                arquivo = fopen("contatos.txt", "w");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return 1;
                }

                for (int i = 0; i < numContatos; i++) {
                    fprintf(arquivo, "%s\n%s\n", agenda[i].nome, agenda[i].telefone);
                }

                fclose(arquivo);
                printf("Agenda salva. Saindo do programa.\n");
                return 0;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    }

    return 0;
}

