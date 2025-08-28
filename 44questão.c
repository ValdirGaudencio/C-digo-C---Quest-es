#include <stdio.h>

int main(void) {
    
    float num1, num2, num3;
    printf("Insira o valor 1: ");
    scanf("%f", &num1);
    printf("Insira o valor 2 valor: ");
    scanf("%f", &num2);
    printf("Insira o valor 3: ");
    scanf("%f", &num3);
    
    float maior, meio, menor;
    
    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 >= num3) {
            meio = num2;
            menor = num3;
        } else {
            meio = num3;
            menor = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 >= num3) {
            meio = num1;
            menor = num3;
        } else {
            meio = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 >= num2) {
            meio = num1;
            menor = num2;
        } else {
            meio = num2;
            menor = num1;
        }
    }
    
    printf("Maior valor: %.2f \n", maior);
    printf("Valor intermediario: %2.f \n", meio);
    printf("Menor valor: %2.f \n", menor);
    
    return 0;
}
