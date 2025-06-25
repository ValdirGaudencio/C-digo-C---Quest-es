#include <stdio.h>

int main() {
    int num;
    int numero_secreto = 10;

    printf("Informe um número entre 1 e 10: ");
    scanf("%d", &num);

    while (num != numero_secreto) {
        if (num < numero_secreto) {
            printf("Muito baixo! Tente novamente: ");
        } else if (num > numero_secreto) {
            printf("Muito alto! Tente novamente: ");
        }

        scanf("%d", &num);
    }

    printf("Parabéns! Você acertou o número: %d\n", numero_secreto);

    return 0;
}

