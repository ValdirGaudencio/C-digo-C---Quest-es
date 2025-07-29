#include <stdio.h>
#include <string.h>
int main(){
    char palavra[100];
    int qtd;
    printf("Escolha a palavra:\n");
    scanf("%s", palavra);
    
    qtd = strlen(palavra);
    
    printf("Palavra: %s.", palavra);
    printf("\nQuantidade de letras: %d.", qtd);
    
    return 0;
}
