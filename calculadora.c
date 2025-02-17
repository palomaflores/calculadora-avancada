#include <stdio.h>

void soma(float a, float b) {
    printf("Resultado: %.2f\n", a + b);
}

void subtracao(float a, float b) {
    printf("Resultado: %.2f\n", a - b);
}

void multiplicacao(float a, float b) {
    printf("Resultado: %.2f\n", a * b);
}

void divisao(float a, float b) {
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Erro! Divisão por zero.\n");
    }
}

int main() {
    int opcao;
    float num1, num2;

    do {
        // Exibe o menu de opções
        printf("\nEscolha uma operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // Se a opção for 5, sai do programa
        if (opcao == 5) {
            printf("Saindo...\n");
            break;
        }

        // Solicita os números para a operação
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Realiza a operação com base na escolha do usuário
        switch (opcao) {
            case 1:
                soma(num1, num2);
                break;
            case 2:
                subtracao(num1, num2);
                break;
            case 3:
                multiplicacao(num1, num2);
                break;
            case 4:
                divisao(num1, num2);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
