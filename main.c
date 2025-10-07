#include <stdio.h>

/*
int main()
{

    // Imprime o cabecalho do nosso jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("****************************************\n");

    int numeroSecreto = 42;
    int chute;
    int tentativas = 1;

    while (1)
    {
        printf("Tentativa %d.\n", tentativas);
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos.\n\n");
            continue;
        }

        if (chute == numeroSecreto)
        {
            printf("\nParabens, o numero secreto era %d!\n", numeroSecreto);
            printf("Jogue novamente, voce e um bom jogador!\n\n");
            break;
        }

        else if (chute > numeroSecreto)
        {
            printf("Seu chute foi maior que o numero secreto.\n");
            printf("Tente novamente!\n\n");
        }

        else
        {
            printf("Seu chute foi menor que o numero secreto.\n");
            printf("Tente novamente!\n\n");
        }

        tentativas++;
    }

    printf("Fim do jogo.\n");
    printf("Voce acertou em %d tentativas.", tentativas);
}
*/

int main()
{
    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma += i;
    }

    printf("A soma de todos os numeros ate o 100 e igual a %d.", soma);
}