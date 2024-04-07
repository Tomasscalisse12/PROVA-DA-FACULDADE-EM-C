#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raiz_quadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é: %.2f\n", numero, raiz_quadrada);
    } else {
        printf("Número inválido. O número deve ser positivo.\n");
    }

    return 0;
}