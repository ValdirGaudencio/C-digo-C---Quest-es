int main() {
    float metros;

    printf("Informe um valor em metros: ");
    scanf("%f", &metros);

    printf("\nCONVERSÂO:\n");
    printf("Decímetros: %.2f dm\n", metros * 10);
    printf("Centímetros: %.2f cm\n", metros * 100);
    printf("Milímetros: %.2f mm\n", metros * 1000);

    return 0;
}
