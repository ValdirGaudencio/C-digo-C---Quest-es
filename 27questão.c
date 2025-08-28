#include <stdio.h>
int main() {
int p1, in;
printf("Insira o preço do produto:");
scanf("%d", &p1);{
if (p1 < 100) {
    in = p1 * 1.10;
}
else{
    in = p1 * 1.20;
}
}
printf("O preço do produto após a inflação é %d", in);
    return 0;
}
