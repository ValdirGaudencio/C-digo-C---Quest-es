int main() {
    int prim, segun, terc;
    printf("Informe o primeiro número: ");
    scanf("%d", &prim);
    printf("Informe o segundo número: ");
    scanf("%d", &segun);
    printf("Informe o terceiro número: ");
    scanf("%d", &terc);
    
    if (prim >= segun && prim >= terc) {
        printf("O maior número é: %d", prim);
    } else if (segun >= prim && segun >= terc) {
        printf("O maior número é: %d", segun);
    } else {
        printf("O maior número é: %d", terc);
    }

    
    

    return 0;
}
