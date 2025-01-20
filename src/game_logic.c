#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void gameLogic(int tries)
{
    srand(time(NULL));

    double score = 1000;
    int pickedNumber;
    int secretNumber = rand() % 10;

    for (int i = 1; i < tries; i++)
    {
        printf("\nTentativa %d de %d - SCORE: %.1f\n", i, tries, score);
        printf("Escolha um número de 0 a 9:\n\n");
        scanf("%d", &pickedNumber);
        
        int maior = pickedNumber < secretNumber;
        int menor = pickedNumber > secretNumber;
        int acertou = pickedNumber == secretNumber;

        if (acertou) {
            printf("\nParabéns! Você acertou!\n");
            break;
        } else if (menor) {
            score -= abs(pickedNumber - secretNumber) / (double)2;
            printf("\nO número secreto é menor que %d - SCORE: %.1f\n", pickedNumber, score);
        } else if (maior) {
            score -= abs(pickedNumber - secretNumber) / (double)2;
            printf("\nO número secreto é maior que %d - SCORE: %.1f\n", pickedNumber, score);
        } else if (pickedNumber < 0 || pickedNumber > 9) {
            while (getchar() != '\n');
            printf("\nValor incorreto. Por favor, escolha um número entre 0 e 9:\n\n");
            i--;
        }
    }

    printf("Fim de jogo! Sua pontuação final é: %.1f\n\n", score);
    printf("Deseja jogar novamente? (1) Sim, (2) Não.\n\n");
    scanf("%d", &pickedNumber);
    if (pickedNumber == 1) {
        gameLogic(tries);
    } else {
        printf("\nObrigado por jogar!\n\n");
    }
}
