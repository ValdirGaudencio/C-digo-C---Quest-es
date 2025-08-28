#include <stdio.h>

int main() {
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("O ano %d é bissexto", ano);
    }
    else if (ano % 100 == 0) {
        printf("O ano %d não é bissexto", ano);
    }
    else if (ano % 4 == 0) {
        printf("O ano %d é bissexto", ano);
    }
    else {
        printf("O ano %d não é bissexto", ano);
    }

    return 0;
 }

