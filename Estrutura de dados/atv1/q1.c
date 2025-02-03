#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    int N, i, count_multiplos = 0;
    float soma = 0;
    
    printf("Quantos números você deseja armazenar?\n");
    scanf("%d", &N);

    int *vetor = (int *) calloc(N, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }


    printf("Digite os %d números:\n", N);
    for (i = 0; i < N; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];  


    float media = soma / N;
    printf("\nA média dos números é: %.2f\n", media);


    printf("Múltiplos de 6:\n");
    for (i = 0; i < N; i++) {
        if (vetor[i] % 6 == 0) {
            printf("%d ", vetor[i]);
            count_multiplos++;
        }
    }
    if (count_multiplos == 0) {
        printf("Nenhum múltiplo de 6 foi digitado.\n");
    }
    printf("\n");


    free(vetor);
    vetor = NULL;

    return 0;
}