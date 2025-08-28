#include <stdio.h>
int main() {
int nota1, nota2, nota3, nota4, nota5, nota6, peso1, peso2, peso3, peso4, peso5, peso6;
    int soma_ponderada, soma_pesos, media_ponderada;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%d", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%d", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%d", &peso3);

printf("Digite a quarta nota: ");
    scanf("%d", &nota4);
    printf("Digite o peso da quarta nota: ");
    scanf("%d", &peso4);
    
    printf("Digite a quinta nota: ");
    scanf("%d", &nota5);
    printf("Digite o peso da quinta nota: ");
    scanf("%d", &peso5);
    
    printf("Digite a sexta nota: ");
    scanf("%d", &nota6);
    printf("Digite o peso da sexta nota: ");
    scanf("%d", &peso6);



    soma_ponderada = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4) + (nota5 * peso5) + (nota6 * peso6);
    soma_pesos = peso1 + peso2 + peso3 + peso4 + peso5 + peso6;

    media_ponderada = soma_ponderada / soma_pesos;

    printf("A média ponderada é: %.2f\n", media_ponderada);

    return 0;
}
