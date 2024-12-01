#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomF()
{
    int randomNumber = rand() % 11;
    int pickedNumber;

    while (1)
    {
        printf("Escolha um número de 0 a 10:\n");
        if (scanf("%d", &pickedNumber) == 1 && pickedNumber >= 0 && pickedNumber <= 10)
        {
            if (pickedNumber == randomNumber)
            {
                printf("Parabéns você acertou!!\n");
                break;
            }
            else
            {
                printf("Número incorreto. Tente novamente:\n");
            }
        }
        else
        {
            printf("Valor incorreto. Por favor, escolha um número entre 0 e 10:\n");
            while (getchar() != '\n')
                ;
        }
    }
}

int main()
{
    srand(time(NULL));
    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");
    randomF();
}
