#include <stdio.h>

int main(){

    int contadorBispo = 0;
    int contadorRainha = 0;

    printf("\nMovendo a TORRE 5 vezes para a Direita.\n");
    // Mover a torre 5 casas para a Direita usando FOR
    for (int contadorTorre = 0; contadorTorre < 5; contadorTorre++){
        printf("\nDireita\n"); // Direçao do movimento
    }

    printf("\n===============================================\n");

    printf("\nMovendo o BISPO 5 vezes na diagonal Direita.\n");
    // Mover o bispo 5 casas na diagonal Direita usando WHILE

    while (contadorBispo < 5){

        printf("\nCima - Direita\n"); // direcao do movimento
        contadorBispo++;

    }

    printf("\n===============================================\n");

    printf("\nMovendo a RAINHA 8 vezes para a Esquerda.\n");

    do{

        printf("\nEsquerda\n");
        contadorRainha++;

    }while(contadorRainha < 8);

    return 0;
}