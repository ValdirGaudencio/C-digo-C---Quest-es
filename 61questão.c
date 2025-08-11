#include <stdio.h>

int main() {
    int vetor[6];
    int i, maior, menor;

    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 6; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nO maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
