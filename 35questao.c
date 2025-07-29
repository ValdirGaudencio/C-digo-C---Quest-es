#include <stdio.h>

int main() {
    char palavra[100];
    
    printf("Digite uma palavra (SIM ou NAO):\n");
    scanf("%s", palavra);

   
    if (palavra[0] == 'S' && palavra[1] == 'I' && palavra[2] == 'M' && palavra[3] == '\0') {
        printf("Retorno: 1\n");
    }
 
    else if (palavra[0] == 'N' && palavra[1] == 'A' && palavra[2] == 'O' && palavra[3] == '\0') {
        printf("Retorno: 0\n");
    }
    else {
        printf("Palavra inválida. Digite apenas SIM ou NAO.\n");
    }

    return 0;
}
