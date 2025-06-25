int main() {
    #include <stdio.h>
    
    int limite, a = 0, b = 1, proximo;

    printf("Informe um número limite para a sequência de Fibonacci: ");
    scanf("%d", &limite);

    printf("Sequência de Fibonacci até %d:\n", limite);

    while (a <= limite) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");
    
    return 0;
}
