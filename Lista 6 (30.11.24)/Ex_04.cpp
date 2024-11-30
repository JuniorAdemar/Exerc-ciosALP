/*Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares*/
#include <iostream>
#include <time.h>

#define ROWS 4
#define COLUMNS 6

int main() {
    int matriz[ROWS][COLUMNS];
    int sum2line,  sum5line, mult1to4line;
    srand(time(0));


    for(int i=0; i<ROWS; i++){
       for(int j=0; j<COLUMNS; j++){
        matriz[i][j] = (rand()%(20+1))-10;
       }
    }

    std::cout<<"A matriz eh: "<<std::endl;

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            soma2linha = 
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}