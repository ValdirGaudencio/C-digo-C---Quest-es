#include <stdio.h>

int main() {
    int nota = 0, qtd = 0, soma = 0;
    float media = 0.0;

    while (1) {
        printf("Informe a nota (Informe um valor negativo para sair): ");
        scanf("%d", &nota);

        if (nota < 0) {
            break; 
        }

        soma += nota;
        qtd++;
    }

    if (qtd > 0) {
        media = (float)soma / qtd; // cast para evitar divisão inteira
        printf("Média das notas digitadas: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}
