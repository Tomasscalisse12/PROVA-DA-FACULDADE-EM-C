#include <stdio.h>

int main() {
    int codigo;
    float preco, total;
    int quantidade;

    printf("Exercício 2 - Lanchonete\n");
    printf("Calculadora de Pedido\n\n");

    printf("Digite o código do produto escolhido: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            preco = 1.20;
            printf("Produto: Cachorro Quente\n");
            break;
        case 101:
            preco = 1.30;
            printf("Produto: Bauru Simples\n");
            break;
        case 102:
            preco = 1.50;
            printf("Produto: Bauru com Ovo\n");
            break;
        case 103:
            preco = 1.70;
            printf("Produto: Hamburguer\n");
            break;
        case 104:
            preco = 2.20;
            printf("Produto: Chessburguer\n");
            break;
        case 105:
            preco = 2.20;
            printf("Produto: Suco\n");
            break;
        case 106:
            preco = 1.00;
            printf("Produto: Refrigerante\n");
            break;
        default:
            printf("Código de produto inválido!\n");
            return 1;
    }

    total = preco * quantidade;
    printf("Preço unitário: R$%.2f\n", preco);
    printf("Quantidade: %d\n", quantidade);
    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}