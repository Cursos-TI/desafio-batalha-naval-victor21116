#include <stdio.h>
int main(){
    int tabuleiro[10][10];
    for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++ );
            tabuleiro[i][j] = 0;
    }
    for (int i = 0; i < 9; i++){
        for ( int j = 0; j < 9; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}