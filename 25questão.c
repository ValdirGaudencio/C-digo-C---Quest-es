#include <stdio.h>

int main() {
    float fahrenhei, celsios;
    
    printf("Qual a temperatura fahrenhei: ");
    scanf ("%f", &fahrenhei);
    
    celsios = 5.0 / 9.0 * (fahrenhei - 32);
    
    printf("Temperatura em Celsius: %.2f ", celsios);
    
    
    return 0;
}

