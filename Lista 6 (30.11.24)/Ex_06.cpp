/*Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
como nota do Grau A e do Grau B.
Exemplo (matriz com informação de 3 alunos):
Grau A Grau B Grau Parcial
7,5 6,7 7,0
4,0 7,1 6,1
8,5 10,0 9,5*/

#include <iostream>
#include <time.h>

#define ROWS 10
#define COLUMNS 3

int main() {
    float matriz[ROWS][COLUMNS];
    srand(time(0));

    std::cout<<"GA  GB  GP"<<std::endl;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            if(j == 2){
                matriz[i][j] = (((matriz[i][j-1])*2)+matriz[i][(j-2)])/3;
            }else{
                matriz[i][j] = (rand()%101)/10.0;
            }
        }
    }

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){

            std::cout<<matriz[i][j]<<" ";
            
        }
        std::cout<<std::endl;
    }
}