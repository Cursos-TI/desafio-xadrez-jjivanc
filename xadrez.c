#include <stdio.h>

int main(){
    int movimentoRainha= 1;
    int movimentoBispo= 1;
    printf("Movimento da Torre: \n");
    for (int i=1;i <=5; i++){
        printf("%d. Direita\n", i);
    }
    printf("Movimento do Rainha: \n");
    while(movimentoRainha<=5){
        printf("%d. Esquerda\n", movimentoRainha);
        movimentoRainha++;
    }
    printf("Movimento do Bispo: \n");
    do{
        printf("%d Cima,Esquerda\n",movimentoBispo);
        movimentoBispo++;
    }while (movimentoBispo<=5);
    
    return 0;
}
