#include <stdio.h>

int main() {
    int i;

    printf("Informe um número: ");
    scanf("%d", &i);

    while (i >= 1) {
        printf("Valor de i: %d\n", i);
        i--;
    }

    return 0;
}
