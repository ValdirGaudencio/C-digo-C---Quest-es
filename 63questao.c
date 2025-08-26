#include <stdio.h>
int main() {
    int a = 0;
    int i, j;
    int elemento[4];
    int matriz[2][2];
    printf("Gerador de matrizes 2X2:\n");
    while(a < 4) {
        printf("Escreva um número:\n");
        scanf("%d", &elemento[a]);
        a++;
    }
    a = 0;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
    matriz[i][j] = elemento[a];
    a++;
}
    }
    printf("A matriz dada foi:\n");
    for(i = 0; i < 2; i++) {
    for(j = 0; j < 2; j++) {
    printf("%d ", matriz[i][j]);
    }
    printf("\n");
    }
return 0;
}
