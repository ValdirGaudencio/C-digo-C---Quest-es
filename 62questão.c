#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
