#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
} Atleta;

int main() {
setlocale(LC_ALL, "Portuguese");
    int n, i, menores = 0;
    float soma_pesos = 0.0;

    printf("Quantos atletas deseja cadastrar? \n");
    scanf("%d", &n);

    Atleta *atletas = (Atleta *)calloc(n, sizeof(Atleta));

    if (atletas == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nAtleta %d:\n", i + 1);
        printf("Nome: ");
        scanf("%49s", atletas[i].nome);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Peso: ");
        scanf("%f", &atletas[i].peso);

        soma_pesos += atletas[i].peso;
        if (atletas[i].idade < 18) menores++;
    }

    printf("\nLista de atletas:\n");
    for (i = 0; i < n; i++) {
        printf("Nome: %s, Idade: %d, Peso: %.2f\n", atletas[i].nome, atletas[i].idade, atletas[i].peso);
    }

    printf("\nMedia dos pesos: %.2f\n", soma_pesos / n);
    printf("Numero de atletas menores de idade: %d\n", menores);

    free(atletas);
    return 0;
}
