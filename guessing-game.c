#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomF()
{
    srand(time(NULL));
    int randomNumber = rand() % 11;
    int pickedNumber;

    while (1)
    {
        printf("Escolha um número de 1 a 10:\n");
        scanf("%d", &pickedNumber);
        if (pickedNumber == randomNumber)
        {
            printf("Parabéns você acertou!!\n");
            break;
        }
        else
        {
            printf("Número incorreto. O numero secreto é %d. Tente novamente\n", randomNumber);
            randomNumber = rand() % 11;
        }
    }
}

int main()
{

    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");
    randomF();
}
