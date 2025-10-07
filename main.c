#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Imprime o cabecalho do nosso jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("****************************************\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

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
        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim do jogo.\n");
    printf("Voce acertou em %d tentativas.", tentativas);
    printf("Voce fez %.2f pontos.", pontos);
}
