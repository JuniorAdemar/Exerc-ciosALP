/*Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
seguinte resultado:
𝑀 = [
1 5 9 2 5
7 4 13 21 6
8 −3 5 7 12
]*/
#include <iostream>

#define ROWS 3
#define COLUMNS 5

int main() {
    int v1[5] = {1,5,9,2,5}, v2[5] = {7,4,13,21,6}, v3[5] = {8, -3,5,7,12};
    int matriz[ROWS][COLUMNS];


    for(int i=0; i<ROWS; i++){
       for(int j=0; j<COLUMNS; j++){
           switch(i){
               case 0:
                   matriz[i][j] = v1[j];
                   break;
               case 1:
                   matriz[i][j] = v2[j];
                   break;
               case 2:
                   matriz[i][j] = v3[j];
                   break;
           }
       }
    }

    std::cout<<"A matriz eh: "<<std::endl;

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}
