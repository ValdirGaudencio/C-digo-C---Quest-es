#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nSoma dos elementos de cada linha:\n");
    for (i = 0; i < 3; i++) {
        soma = 0; 
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}
