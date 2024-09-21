/******************************************************************************

16. Escreva um programa que apresente um menu com as seguintes opções:
1. Calcular o fatorial de um número.
2. Sair.
O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido até que o usuário escolha a opção de sair. (0.2
ponto)
Entrada: escolha da opção e um número inteiro.
Saída: fatorial do número.

*******************************************************************************/
#include <stdio.h>

int main() {
    int opcao, numero;
    unsigned long long fatorial;

    do {
        printf("1. Calcular fatorial\n2. Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um número: ");
            scanf("%d", &numero);

            if (numero < 0)
                printf("Fatorial não definido para negativos.\n");
            else {
                fatorial = 1;
                for (int i = 1; i <= numero; i++) 
                    fatorial *= i;
                printf("Fatorial de %d: %llu\n", numero, fatorial);
            }
        } else if (opcao != 2) 
            printf("Opção inválida.\n");

    } while (opcao != 2);

    return 0;
}
