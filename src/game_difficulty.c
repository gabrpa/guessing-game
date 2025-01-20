#include <stdio.h>

int gameDifficulty()
{
    int difficulty;
    int tries;

    printf("Para iniciar, escolha uma dificuldade: (1) Fácil, (2) Normal, (3) Difícil.\n\n");
    scanf("%d", &difficulty);
    if (difficulty < 1 || difficulty > 3)
    {
        while (getchar() != '\n');
        printf("\nValor inválido. Por favor, escolha uma dificuldade entre 1 a 3.\n\n");
        return gameDifficulty();
    }
    printf("\nDificuldade escolhida: %d\n\n", difficulty);
    switch (difficulty)
    {
    case 1:
        tries = 15;
        break;
    case 2:
        tries = 10;
        break;
    case 3:
        tries = 5;
        break;
    }
    return tries;
}