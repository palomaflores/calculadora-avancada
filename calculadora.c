#include <stdio.h>
#include <math.h>

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

void potencia(float base, float expoente) {
    printf("Resultado: %.2f\n", pow(base, expoente));
}

void raiz_quadrada(float a) {
    if (a >= 0) {
        printf("Resultado: %.2f\n", sqrt(a));
    } else {
        printf("Erro! Não é possível calcular a raiz quadrada de um número negativo.\n");
    }
}

void resto_divisao(int a, int b) {
    if (b != 0) {
        printf("Resultado: %d\n", a % b);
    } else {
        printf("Erro! Divisão por zero.\n");
    }
}

int fatorial(int n) {
    if (n < 0) {
        printf("Erro! Não existe fatorial de número negativo.\n");
        return -1;
    }
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    printf("Resultado: %d\n", resultado);
    return resultado;
}

int main() {
    int opcao;
    float num1, num2;
    int num_int1, num_int2;

    do {
        // Exibe o menu de opções
        printf("\nEscolha uma operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Potência\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Resto da Divisão\n");
        printf("8. Fatorial\n");
        printf("9. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // Se a opção for 9, sai do programa
        if (opcao == 9) {
            printf("Saindo...\n");
            break;
        }

        // Solicita os números para a operação
        if (opcao == 6) {
            printf("Digite o número: ");
            scanf("%f", &num1);
        } else if (opcao == 8) {
            printf("Digite um número inteiro: ");
            scanf("%d", &num_int1);
        } else if (opcao == 7) {
            printf("Digite o primeiro número inteiro: ");
            scanf("%d", &num_int1);
            printf("Digite o segundo número inteiro: ");
            scanf("%d", &num_int2);
        } else {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

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
            case 5:
                potencia(num1, num2);
                break;
            case 6:
                raiz_quadrada(num1);
                break;
            case 7:
                resto_divisao(num_int1, num_int2);
                break;
            case 8:
                fatorial(num_int1);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 9);

    return 0;
}
