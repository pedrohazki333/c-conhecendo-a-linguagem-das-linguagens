#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Imprime o cabecalho do nosso jogo
    printf("        ,     \\    /      ,              \n");
    printf("       / \\    )\\__/(     / \\           \n");
    printf("      /   \\  (_\\  /_)   /   \\          \n");
    printf(" ____/_____\\__\\@  @/___/_____\\____     \n");
    printf("|             |\\../|              |      \n");
    printf("|              \\VV/               |      \n");
    printf("|        --Adivinhation--         |       \n");
    printf("|_________________________________|       \n");
    printf(" |    /\\ /      \\\\       \\ /\\    |   \n");
    printf(" |  /   V        ))       V   \\  |       \n");
    printf(" |/     `       //        '     \\|       \n");
    printf(" `              V                '        \n\n\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int numeroTentativas;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1)Facil (2)Medio (3)Dificil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch (nivel)
    {
        case 1:
            numeroTentativas = 20;
            break;

        case 2:
            numeroTentativas = 10;
            break;

        default:
            numeroTentativas = 5;
            break;
    }

    for (int i = 1; i <= numeroTentativas; i++)
    {
        printf("\nTentativa %d/%d.\n", tentativas, numeroTentativas);
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos.\n\n");
            continue;
        }

        acertou = (chute == numeroSecreto);

        if (acertou)
        {
            break;
        }

        else if (chute > numeroSecreto)
        {
            printf("Seu chute foi maior que o numero secreto.\n");
        }

        else
        {
            printf("Seu chute foi menor que o numero secreto.\n");
        }

        tentativas++;
        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosPerdidos;
    }

    printf("\nFim do jogo.\n");

    if (acertou)
    {                                                                                                                                                                          
        printf("                                         @@@@@@@@@@@@                               \n");           
        printf("                                         @@@@@@@@@@@@                               \n");           
        printf("                                     @@@@@@@@@@@@@@@@@@@@                           \n");          
        printf("                                    @@@@@@@@@@@@@@@@@@@@@@                          \n");          
        printf("                                    @@   @@@@@@@@@@@@   @@                          \n");          
        printf("                                      @@@@@@@@@@@@@@@@@@                            \n");          
        printf("                                           @@@@@@@@                                 \n");          
        printf("                                             @@@@                                   \n");          
        printf("                                             @@@@                                   \n");          
        printf("                                           @@@@@@@@                                 \n");          
        printf("                                           @@@@@@@@                                 \n");          
        printf("                                                                                    \n");         
        printf("                                                                                    \n");          
        printf("                @@  @@@  @@@@@@@  @@   @@@       @@   @@@  @@@@@@  @@@   @@  @@     \n");          
        printf("                @@  @@@ @@@   @@  @@   @@@       @@ @ @@@    @@    @@@@@ @@  @@     \n");          
        printf("                  @@    @@@   @@  @@   @@@       @@@@@@@@    @@    @@@@@@@@  @@     \n");          
        printf("                  @@     @@@@@@@  @@@@@@@@       @@@ @@@@  @@@@@@  @@@  @@@  @@     \n\n\n");          
                                                                                                               
        printf("\nParabens, o numero secreto era %d!\n", numeroSecreto);
        printf("Voce acertou em %d tentativas.\n", tentativas);
        printf("Voce fez %.2f pontos.\n", pontos);
        printf("Jogue novamente, voce e um bom jogador!\n\n");
    }
    else
    {                                                                                           
        printf("                             @@@@                                                                   \n");
        printf("                           @-   .-@@                                                                \n");
        printf("                          -@  .  : :@                                                               \n");
        printf("                          @  .. .-. +*                                                              \n");
        printf("                          @  .. :--. @                                                              \n");
        printf("                          -# .. :... -X                                                             \n");
        printf("                           @  ..:...  @                                                             \n");
        printf("                           @  .:..... @                                                             \n");
        printf("                           @  ....... +-                                                            \n");
        printf("                    .@@@-  @ ........  @                                                            \n");
        printf("                 #@@-    -@@  ........ @                                                            \n");
        printf("                @     ..   -X ........ @                                                            \n");
        printf("        @@X+-::+@#  .....   @  ....... @                                                            \n");
        printf("     #@.   .      @  .....  *: ....... @                                                            \n");
        printf("    @.   .......   @ ...... += ....... @                                                            \n");
        printf("   @  *@  ........ @  ..... @  ....... @                                                            \n");
        printf("  #= . =@ .......  @: ....  @  ....... @                                                            \n");
        printf("  @ .:. @  ....... @  ...  X. ........ @  :=**#XXXXX#*+=:                                           \n");
        printf("  @ :::  @   ....  @      XX  ........ @ =-.          .:-=#@@@@=                                    \n");
        printf("  @ :::. .@       +@:-==X@   ......... @   :@@@@@@@@@@=        :+#@@  @@                            \n");
        printf("  @ .::..  *@@=-@@   #*    ..........  @ @@            @@:  ..:.:    @@@@@                          \n");
        printf("   * :::..                   ....     -@@   .....   ..   -@ .:..:.:.   @@@@*                        \n");
        printf("  @  ::.....   ......   +@X... . +@#  *  ......:::.      @: -==--:..    @@: @@                      \n");
        printf("    @ .:::...........  #@                ..........---:.  @=      .---:   @@  .@@                   \n");
        printf("    =@ .::..........  @.  .................             -@@  .        :-   @ ..  #@                 \n");
        printf("      @. .::.:...... @   .... ..........     -*XX@@X@@@@@+    .....      . @ ..:.  +@               \n");
        printf("       @*. .........   . ....:-:......   +@@+=-: :=##=     ......... ..    . ....:.  +@             \n");
        printf("        @@    ..............   ...    X@                ... ......   .  .   =-:...:. .@             \n");
        printf("           @@@-                     *@.  @@@@@@@@@@    .......                 ::::.::. #@          \n");
        printf("          @  -X@@@@#*=:.     :=*X@@X  @@@@        @@@   ....     +@@@@.         :-.::.:. -@         \n");
        printf("         @  .   .-=+##X@@@@@@@XX#=   @@             @@  ..   .@@@@@@@@@@@     .  .-.:.:.: :@        \n");
        printf("        @  ::.:.      ::.:::.      @@                @  .   @@          @@@   ..  .-:...:. .@       \n");
        printf("       @  :.::.......             @@                 :@   =@              @@    .. .:::..:.  @      \n");
        printf("      =* ::.::::::.............  .@                   @  @@                @   ...  -:..:::: :@     \n");
        printf("      @ ...::.........:........  @              @@@  -@ #@                 @#  ....  -....::: X:    \n");
        printf("     #= ::::.:.................  @          @-@@@ @  @  @     =@@@         @@  ..... :.:.:.... @    \n");
        printf("     @ .:.:.........:..    .... =@          @ @@= @  @ XX   @  @  @        @:  .....  :...:::. :@   \n");
        printf("     @ ::::.:...:.... .-#=.     =@          -@X. @  @  @   @#@@@@ @        @  ......  ::....:.. @   \n");
        printf("    -# ..::.........::.   :@@@-  @                 @   @   @* @  @        @=  ...... ::...:.::. +*  \n");
        printf("    @- :.::..::......:=*#*-    +@@.              @@  . @+   @@@@X        @+           :...:.:::. @  \n");
        printf("    @. :.::...:...::..  .*X##+    :@           @@   ..  @              X@@=**+==*#@@@ .....:::.: @  \n");
        printf("    X- :.::.....::....       ..:    .@*    .@@@    ...  +@        =@@@.         .     ::...:.... @  \n");
        printf("    -# :.::..:.:              .....    @@@@=     ......   @@+  X@+       .-=*##+:      :::.:::.: @  \n");
        printf("     @ :.::..:.: #@@@@@@@*=-: ........       ...........    @@.      ...           .      .::::: @  \n");
        printf("     @ :.::..:.:.       -@       .. ...   .............. =@      ....... #@@@X-=@@:=+@@@*...:::: @  \n");
        printf("     #= :::.:..........   @@                                ...........      -@@         ...:::. @  \n");
        printf("      @ ..:.::......:....  @@@@@*               . ... .                   @@@@   ........::::.: .@  \n");
        printf("      X= .::.:..:........  .@@@@@@@@@@@@-+@@@@@#+=--::::::::-=*X@@@@   @@@@=    .......:...:::. @   \n");
        printf("       @. ...:............  +@@X##X@@@@@@       =+*##XXXXXX##+:      @@@@     ...........:::.:. @   \n");
        printf("        @ .::.:.::.........  .@@@##X###@@@                        @@@@@     ...:......:.:::::: @    \n");
        printf("        -@ .:::.............   @@@X#####@@@@@                 @@@@@@.    ................::.: :@    \n");
        printf("         X* ..:.....:...:....   -@@@X######@@@@@@@@@@@@@@@@@@@@@@*     ..............::::.::  @     \n");
        printf("          X# .:.:...........:..   =@@@@X##X@@@@@@@@@@X=:=X@@@@X     .............::.::.::.:  @      \n");
        printf("           +@  ::..::.:.:.......     @@@@@@@+    *=   .+XX*.     ..............:..:...::.:  @       \n");
        printf("             @  .:::..............      *@@@@@@@@@@@@@@-       ..............:......::::: :@        \n");
        printf("              @=  :.....:...:........                      ....................:.::-..:. :@         \n");
        printf("               #@. .:::.:::............=**+:        -+***...............::.::.::::.  : .*@          \n");
        printf("                 @*  .::....:.........    :=+++*****+:    ..........:........:::.   .  @            \n");
        printf("                   @#. ..:.............:..             .................:::-::.. ... @@             \n");
        printf("                     @@.  ::::..::::.:.:.:::........:::.....:...:.:::::-:::.   ...:@@               \n");
        printf("                       +@#.  ..................................:::--::.      .:.*@+                 \n");
        printf("                          @@#.  .:.:.:...:::.....:::::::::-----::.        .:.+@@                    \n");
        printf("                             @@X-   ..::.....:..:::-----::..           ..-*@@:                      \n");
        printf("                                 @@@+-    .:::::.                .  -+#@@@                          \n");
        printf("                                     :@@@@+=-:              -=**X@@@@                               \n");
        printf("                                            -*@@@@@@@@@@@@@@@+.                                     \n");
                                                                                                    

        printf("Voce perdeu, sinto muito.");
    }
}
