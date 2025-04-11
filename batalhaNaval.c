#include <stdio.h>
int main(){
    
    //Declaração do tabuleiro e Navios 

    int tabuleiro[10][10];
    int navioVertical[3] = {3,3,3};
    int navioHorizontal[3]={3,3,3};

    //declarando as posições do navio
    int linhaVertical = 0;
    int colunavertical = 0;
    int linhaHorizontal = 9;
    int colunaHorizontal = 7;


    printf("\n");

    for (int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++ ){
            tabuleiro[linha][coluna] = 0;
        }
    }
   

    //Colocando os navios dentro do tabuleiro e com verificação de limite

    int podeColocar = 1;
    if(linhaVertical + 2 < 10){
        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaVertical + i][colunavertical]!= 0){
                podeColocar = 0;
                printf("Posição (%d, %d) está ocupada!\n", linhaVertical+i, colunavertical);
            }
        }
    }

    if(podeColocar){
        for(int i = 0; i < 3; i++){
            tabuleiro[linhaVertical + i][colunavertical] = navioVertical[i];
        }
    }


    podeColocar = 1;
    if (colunaHorizontal + 2 < 10){
        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaHorizontal][colunaHorizontal + i] != 0){
                podeColocar = 0;
                printf("Posição (%d, %d) está ocupada!\n", linhaHorizontal, colunaHorizontal + i);
            }
        }
    }
    if(podeColocar){
        for (int i = 0; i < 3; i++){
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    }

    //Imprimindo o tabuleiro com os navios posicionados

    for (int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
