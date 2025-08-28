#include <stdio.h>

int main() {
    printf("Bem-vindo(a) a Imobiliária Central! \n");
    
    float compr, larg;
    printf("Insira o comprimento do terreno: \n");
    scanf("%f", &compr);
    printf("Insira a largura do terreno: ");
    scanf("%f", &larg);
    
    float area;
    
    area = compr * larg;
    
    printf("A área do seu terreno é: %.2f", area);
    
    return 0;
}
