#include <stdio.h>
int main() {
char nome[20], endereço[10];
int telefone, idade;

printf("Informe o seu nome: ");
scanf("%s", &nome);

printf("Informe o seu endereço: ");
scanf("%s", &endereço);

printf("Informe o seu telefone: ");
scanf("%d", &telefone);

printf("Informe a sua idade: ");
scanf("%d", &idade);

printf("Seu nome é %s, seu endereço é %s, seu telefone é %d, sua idade é %d", nome, endereço, telefone, idade);


    return 0;
}
