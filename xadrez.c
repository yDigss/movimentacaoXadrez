#include <stdio.h>

void moverTorre(int i){
    if (i > 0){
        printf("\nDireita \n");

        moverTorre (i - 1);
    }
}

void bispo(int casas, int passo) {
    if (passo == casas) return; 

    for (int vertical = 0; vertical < 1; vertical++) { // loop externo
        for (int horizontal = 0; horizontal < 1; horizontal++) { // loop interno
            printf("\nCima - ");
            printf("Direita\n");
        }
    }

    bispo(casas, passo + 1);
}


void moverRainha(int casas) {
    if (casas == 0) return; 
    printf("\nEsquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo(int movimentos){
    for (int m = 0; m < movimentos; m++){
        for (int vertical = 0; vertical < 2; vertical++){
            printf("\nCima \n");
        }

        for (int horizontal = 0; horizontal < 2; horizontal++){
            if (horizontal == 1) break;
            printf("\nDireita \n");
        }
    }
}

int main(){

    int contadorTorre = 5;
    int casasBispo = 5;
    int contadorRainha = 8;
    int contadorCavalo = 1;


    printf("\nMovendo a TORRE 5 vezes para a Direita: \n");
    moverTorre(contadorTorre);

    printf("\n===============================================\n");

    printf("\nMovendo o BISPO 5 vezes na diagonal Direita: \n");

    bispo(casasBispo, 0);

    printf("\n===============================================\n");

    printf("\nMovendo a RAINHA 8 vezes para a Esquerda.\n");

    moverRainha(contadorRainha);

    printf("\n===============================================\n");

    printf("\nMovendo o CAVALO em L, Cima Cima Direita.\n");

    moverCavalo(contadorCavalo);

    return 0;
}