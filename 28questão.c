int main(void) {
    
    float valor, valorfinal;
    int opção;
    
    printf("Informe o valor da compra: ");
    scanf("%f", &valor);
    
    if(valor < 100) {
    printf("\n Escolha uma opção de pagamento: ");
    printf("\n 1 - À vista (10%% de desconto: ");
    printf("\n 2 - em duas vezes (preço da etiqueta): ");
    scanf("%d", &opção);
    
    if(opção == 1) {
    valorfinal = valor - (valor * 0.1);
    printf("O que valor que você irá pagar será de: %f", valorfinal);
    }
    
if(opção == 2) {
    valorfinal = valor/2;
    printf("O que valor que você irá pagar será de: %f", valorfinal);
}
 if(valor >= 100) {
     printf("\n Escolha uma opção de pagamento: ");
    printf("\n 1 - À vista (10%% de desconto: ");
    printf("\n 2 - em duas vezes (preço da etiqueta): ");
    printf("\n 3 - 3 até 10 vezes com 3%% de juros ao mês ( somente para compras acima de R$100,00: ");
    scanf("%d", &opção);
    
 }
 
 if(opção == 1) {
    valorfinal = valor - (valor * 0.1);
    printf("O que valor que você irá pagar será de: %f", valorfinal);
    }
    
if(opção == 2) {
    valorfinal = valor/2;
    printf("O que valor que você irá pagar será de: %f", valorfinal);
}
    return 0;
}
