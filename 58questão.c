#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1;

    printf("Informe um número inteiro não negativo: ");
    scanf("%d", &num);

    while (num < 0) {
        printf("Número inválido! Tente novamente: ");
        scanf("%d", &num);
    }

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %llu\n", num, fatorial);

    return 0;
}

