int main() {
int num1, num2, num3, num4, num5, num6, soma, media;
    printf("Digite o primeiro número: ");
    scanf( "%d", &num1);
     printf("Digite o segundo número: ");
    scanf( "%d", &num2);
     printf("Digite o terceiro número: ");
    scanf("%d", &num3);
     printf("Digite o quarto número: ");
    scanf("%d", &num4);
     printf("Digite o quinto número: ");
    scanf( "%d", &num5);
     printf("Digite o sexto número: ");
    scanf("%d", &num6);
    
    soma = num1 + num2 + num3 + num4 + num5 + num6;
    media = soma / 6;
    
    
    printf( "O resultado é : %d", media);

 return 0;

}
