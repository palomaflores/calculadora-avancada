# Calculadora Simples

## Descrição
Este é um programa simples em C que implementa uma calculadora básica. Ele permite que o usuário realize operações matemáticas fundamentais, como soma, subtração, multiplicação e divisão, por meio de um menu interativo.

## Funcionalidades
- Soma de dois números
- Subtração de dois números
- Multiplicação de dois números
- Divisão de dois números (com verificação de divisão por zero)

## Como Executar
1. Certifique-se de ter um compilador C instalado (por exemplo, GCC).
2. Copie o código-fonte para um arquivo chamado `calculadora.c`.
3. Compile o programa usando o seguinte comando:
   ```bash
   gcc calculadora.c -o calculadora
   ```
4. Execute o programa:
   ```bash
   ./calculadora
   ```

## Uso
Ao executar o programa, um menu será exibido para que o usuário escolha a operação desejada. Após selecionar uma opção, o usuário deve inserir dois números para a operação escolhida. O resultado será exibido na tela.

O programa continuará rodando até que o usuário escolha a opção "5. Sair".

## Exemplo de Saída
```
Escolha uma operação:
1. Soma
2. Subtração
3. Multiplicação
4. Divisão
5. Sair
Opção: 1
Digite o primeiro número: 10
Digite o segundo número: 5
Resultado: 15.00
```

## Estrutura do Código
O programa segue a seguinte estrutura:
- **Funções de operações matemáticas**: Soma, subtração, multiplicação e divisão.
- **Verificação de divisão por zero**: Evita erro ao tentar dividir por zero.
- **Menu interativo**: O loop `do-while` mantém o programa rodando até que o usuário decida sair.
- **Switch case**: Utilizado para determinar qual operação executar com base na escolha do usuário.

## Requisitos
- Compilador C (GCC, Clang, MinGW, etc.)
- Terminal para executar o programa

## Autor
Este projeto foi desenvolvido como um exemplo de programa de calculadora básica em C.
