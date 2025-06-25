#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    char senha_correta[] = "201108";

    printf("Digite a senha: ");
    scanf("%s", senha);

    while (strcmp(senha, senha_correta) != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
    }

    printf("Acesso liberado! Bem-vindo!\n");

    return 0;
}
