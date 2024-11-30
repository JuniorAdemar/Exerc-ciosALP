/*Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
*/
#include <iostream>

#define ROWS 4
#define COLUMNS 4

int main() {
    int matriz[ROWS][COLUMNS];


    for(int i=0; i<ROWS; i++){
       for(int j=0; j<COLUMNS; j++){

          if(i == j){
            matriz[i][j] = 1;
          }else{
            matriz[i][j] = 0;
          }

       }
    }


    std::cout<<"A matriz identidade eh: "<<std::endl;

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){

            std::cout<<matriz[i][j]<<" ";
            
        }
        std::cout<<std::endl;
    }
}