#include <stdio.h>

int main() {
    char operação;
    float num1, num2;
    
    printf("Insira um dos símbolos( +, -, /, ou * : ");
    scanf(" %c", &operação);
    printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    
    if (operação == '+') {
        printf("Resultado: %.2f\n", num1 + num2);
    } else if (operação == '-') {
        printf("Resultado: %.2f\n", num1 - num2);
    } else if (operação == '*') {
        printf("Resultado: %.2f\n", num1 * num2);
    } else if (operação == '/') {
        if (num2 != 0) {
            printf("Resultado: %.2f\n", num1 / num2);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
    } else {
        printf("Operador inválido!\n");
    }

    return 0;
}
