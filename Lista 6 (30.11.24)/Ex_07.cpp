/*Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
em positivos e vice-versa. */

#include <iostream>
#include <time.h>

#define ROWS 5
#define COLUMNS 5

int main() {
    float matriz[ROWS][COLUMNS];
    srand(time(0));


    std::cout<<"Matriz normal:"<<std::endl;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            matriz[i][j] = (rand()%21)-10;
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }


    std::cout<<"Matriz com sinal trocado:"<<std::endl;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            matriz[i][j] -= 2*(matriz[i][j]);
            std::cout<<matriz[i][j]<<" ";
            
        }
        std::cout<<std::endl;
    }
}