/*

Alunos:
Alícia Vitória Sousa Santos
Rafael Gomes Oliveira Santos

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Participante {
    char nome[50];
    char cpf[15];
    struct Participante *prox;
} Participante;

//novo participante
Participante* criarParticipante(char nome[], char cpf[]) {
    Participante *novo = (Participante*)malloc(sizeof(Participante));
    strcpy(novo->nome, nome);
    strcpy(novo->cpf, cpf);
    novo->prox = NULL;
    return novo;
}

//adicionar um participante à lista circular
void adicionarParticipante(Participante **head, char nome[], char cpf[]) {
    Participante *novo = criarParticipante(nome, cpf);
    if (*head == NULL) {
        *head = novo;
        novo->prox = *head;
    } else {
        Participante *temp = *head;
        while (temp->prox != *head) {
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = *head;
    }
}

//remover um participante da lista circular
void removerParticipante(Participante **head, Participante *alvo) {
    if (*head == NULL) return;

    Participante *temp = *head;
    //lista de uma pessoa só
    if (temp->prox == *head && temp == alvo) {
        *head = NULL;
        free(temp);
        return;
    }

    //nó anterior ao alvo
    while (temp->prox != alvo) {
        temp = temp->prox;
    }

    //remover o nó alvo
    temp->prox = alvo->prox;
    if (alvo == *head) {
        *head = temp->prox;
    }
    free(alvo);
}

//
void imprimirParticipantes(Participante *head) {
    if (head == NULL) {
        printf("Nenhum participante restante.\n");
        return;
    }
    Participante *temp = head;
    do {
        printf("Nome: %s, CPF: %s\n", temp->nome, temp->cpf);
        temp = temp->prox;
    } while (temp != head);
}

//problema de Josephus
void josephus(Participante **head, int m) {
    Participante *atual = *head;

    while (*head != (*head)->prox) {
        for (int i = 1; i < m; i++) {
            atual = atual->prox;
        }

        printf("Participante eliminado: %s, CPF: %s\n", atual->nome, atual->cpf);
        printf("Número sorteado: %d\n", m);
        printf("Participantes restantes:\n");
        imprimirParticipantes(*head);
        printf("\n");

        removerParticipante(head, atual);
        atual = atual->prox;
    }

    printf("\nO grande vencedor é: %s, CPF: %s\n", (*head)->nome, (*head)->cpf);

    //libera a memória do vencedor
    free(*head);
    *head = NULL; //define o ponteiro head como NULL para evitar uso acidental
}

int main() {
    int n, m;
    printf("Digite o número de participantes: ");
    scanf("%d", &n);

    Participante *head = NULL;
    char nome[50], cpf[15];

    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do participante %d: \n", i + 1);
        scanf("%s", nome);
        printf("Digite o CPF do participante %d: \n", i + 1);
        scanf("%s", cpf);
        adicionarParticipante(&head, nome, cpf);
    }

    printf("Digite o número sorteado (m): ");
    scanf("%d", &m);

    josephus(&head, m);

    return 0;
}