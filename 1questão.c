#include <stdio.h>
int main() {
    int med1, med2, med3;
    printf("Informe a primeira medida: ");
    scanf("%d", &med1);
    printf("Informe a segunda medida: ");
    scanf("%d", &med2);
    printf("Informe a terceira medida: ");
    scanf("%d", &med3);
    
    if ((med1 < med2 + med3) && (med2 < med1 + med3) && (med3 < med1 + med2)) {
        if (med1 == med2 && med2 == med3) {
            printf("Triângulo Equilátero\n");
        } else if (med1 == med2 || med1 == med3 || med2 == med3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("As medidas não formam um triângulo válido.\n");
    }

    return 0;
}
int main() {
int num1, num2, soma;
    printf( "Coloque os dois números: ");
    scanf( "%d %d", &num1, &num2);
    
    soma = num1 + num2;
    
    printf( "O resultado é : %d", soma);

    return 0;
    }
