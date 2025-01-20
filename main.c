#include <stdio.h>
#include "include/game_difficulty.h"
#include "include/game_logic.h"

int main() {
    printf("\n\n              /\\_____/\\       \n");
    printf("             /  o   o  \\       \n");
    printf("            ( ==  ^  == )       \n");
    printf("             )         (        \n");
    printf("            (           )       \n");
    printf("           ( (  )   (  ) )      \n");
    printf("          (__(__)___(__)__)     \n");
    printf("\n**************************************\n");
    printf("   Bem vindo ao jogo de adivinhação\n");
    printf("**************************************\n\n");

    gameLogic(gameDifficulty());
    return 0;
}