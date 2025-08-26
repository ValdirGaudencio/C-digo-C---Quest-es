#include <stdio.h>
int main() {
int a = 0;
int i, j, soma = 0;
int elemento[6];
int matriz[2][3];
printf("Gerador de matrizes 2x3:\n");
while(a < 6) {
printf("Escreva um elemento da matriz:\n");
scanf("%d", &elemento[a]);
a++;
}
a = 0;
for(i = 0; i < 2; i++) {
for(j = 0; j < 3; j++) {
matriz[i][j] = elemento[a];
soma += matriz[i][j];
a++;
}
}
printf("A matriz digitada foi:\n");
for(i = 0; i < 2; i++) {
for(j = 0; j < 3; j++) {
printf("%d ", matriz[i][j]);
}
printf("\n");
}
printf("Soma: %d\n", soma);
return 0;
}
