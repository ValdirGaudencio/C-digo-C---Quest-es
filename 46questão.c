#include <stdio.h>

int main() {
    int num, i, soma;

    printf("Números perfeitos entre 1 e 100:\n");

    for (num = 1; num <= 100; num++) {
        soma = 0;

        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }

        if (soma == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
