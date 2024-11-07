/*Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
dia. Escreva um programa que:
a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
b. Calcule o consumo total do mês.
c. Calcule a média de consumo diário.
d. Imprima o dia em que houve o maior consumo e o menor consumo de água.*/

#include <iostream>
#include <time.h>
#include <vector>

#define DAYS_IN_MONTH 30

int main(){
    int sum = 0, mid = 0, greater = 0, lowest = 500;
    std::vector<int> waterConsumption(DAYS_IN_MONTH, 0);

    std::cout<<"Sorteando os valores diários no mes..."<<std::endl;

    srand(time(0));
    for(int i = 0; i<DAYS_IN_MONTH; i++){
        waterConsumption[i] = (rand()%400+1)+100; //sorteia o valor de 100 a 500
    }

    for(const int & i : waterConsumption){
        sum+=i; //soma os valores presentes no vetor waterConsumption

        if(i>greater){ //verifica se o elemento do vetor é maior que o maior elemento anterior
            greater = i;
        }
        if(i<lowest){ //verifica se o elemento é menor que o menor elemento anterior
            lowest = i;
        }
    }
    
    mid = sum/(waterConsumption.size()); //calcula a media com base no tamanho do vetor
    
    std::cout<<"Consumo total do mes: "<<sum<<std::endl;
    std::cout<<"Media do consumo do mes: "<<mid<<std::endl;
    std::cout<<"Menor consumo do mes: "<<lowest<<std::endl;
    std::cout<<"Maior consumo do mes: "<<greater<<std::endl;


}