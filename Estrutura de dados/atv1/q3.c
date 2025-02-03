#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int comparar_por_nome(const void *a, const void *b) {
    return strcmp(((Aluno *)a)->nome, ((Aluno *)b)->nome);
}

int comparar_por_media(const void *a, const void *b) {
    float diff = ((Aluno *)b)->media - ((Aluno *)a)->media;
    return (diff > 0) - (diff < 0);
}

int main() {
setlocale(LC_ALL, "Portuguese");

    int n, i, opcao;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    Aluno *alunos = (Aluno *)calloc(n, sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%49s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Media: ");
        scanf("%f", &alunos[i].media);
    }

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Listar alunos em ordem alfabetica\n");
        printf("2. Listar alunos por classificacao (media)\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                qsort(alunos, n, sizeof(Aluno), comparar_por_nome);
                printf("\nLista em ordem alfabetica:\n");
                for (i = 0; i < n; i++) {
                    printf("Nome: %s, Matricula: %d, Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
                }
                break;
            case 2:
                qsort(alunos, n, sizeof(Aluno), comparar_por_media);
                printf("\nLista por classificacao:\n");
                for (i = 0; i < n; i++) {
                    printf("Nome: %s, Matricula: %d, Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
                }
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    free(alunos);
    return 0;
}
