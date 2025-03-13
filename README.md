# Calculadora Avançada
Este é um programa em lingaugem C que oferece uma série de operações matemáticas interativas, permitindo ao usuário realizar cálculos básicos e avançados. As operações incluem soma, subtração, multiplicação, divisão, potência, raiz quadrada, cálculo do resto da divisão e fatorial. O programa funciona com entradas tanto para números decimais quanto inteiros, e garante a proteção contra erros como divisão por zero ou tentativa de calcular a raiz quadrada de números negativos.

## Funcionalidades
O programa possui as seguintes funcionalidades:

- **Soma:** Adiciona dois números.
- **Subtração:** Subtrai o segundo número do primeiro.
- **Multiplicação:** Multiplica dois números.
- **Divisão:** Realiza a divisão de dois números, com verificação de divisão por zero.
- **Potência:** Calcula a potência de um número elevado a outro.
- **Raiz Quadrada:** Calcula a raiz quadrada de um número não negativo.
- **Resto da Divisão:** Calcula o resto da divisão de dois números inteiros.
- **Fatorial:** Calcula o fatorial de um número inteiro não negativo.
- **Sair:** Encerra o programa.

## Como Usar
1. Ao executar o programa, o usuário será apresentado a um menu com as opções de operações matemáticas.
2. O usuário escolhe a operação desejada digitando o número correspondente.
3. Dependendo da operação escolhida, o programa solicitará os números necessários para o cálculo.
4. O programa executa a operação e exibe o resultado.
5. O usuário pode continuar realizando operações ou sair do programa selecionando a opção "Sair".
 
###Exemplo de Execução
```markdown
Escolha uma operação:
1. Soma
2. Subtração
3. Multiplicação
4. Divisão
5. Potência
6. Raiz Quadrada
7. Resto da Divisão
8. Fatorial
9. Sair
Opção: 1
Digite o primeiro número: 5
Digite o segundo número: 3
Resultado: 8.00
```

## Como Funciona o Código
- **Funções de Operações:** Cada operação (como soma, subtração, etc.) é implementada em funções separadas. Essas funções recebem os números como parâmetros, realizam o cálculo e imprimem o resultado.

- **Loop e Menu:** O programa roda em um loop do-while, exibindo um menu de opções até que o usuário escolha sair (opção 9). O menu é repetidamente mostrado após cada operação.

- **Validação de Erros:** Existem verificações para evitar erros comuns, como a tentativa de divisão por zero ou calcular a raiz quadrada de números negativos.

## Como Compilar e Rodar
1. Compile o código em um compilador C de sua escolha:
```bash
gcc calculadora.c -o calculadora -lm
```
2. Execute o programa gerado:
```back
./calculadora
```
