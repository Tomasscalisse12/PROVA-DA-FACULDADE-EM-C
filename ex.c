#include <stdio.h>

char converterNota(int nota) {
    if (nota >= 86 && nota <= 100) {
        return 'A';
    } else if (nota >= 61 && nota <= 85) {
        return 'B';
    } else if (nota >= 36 && nota <= 60) {
        return 'C';
    } else if (nota >= 1 && nota <= 35) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int nota;
    
    printf("Exercício 1 - Notas da prova\n");
    printf("Conversor de Notas: Sistema Numérico para Conceitos\n\n");

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota inválida. A nota deve estar entre 0 e 100.\n");
        return 1;
    }

    char conceito = converterNota(nota);
    printf("O conceito correspondente à nota %d é: %c\n", nota, conceito);

    return 0;
}