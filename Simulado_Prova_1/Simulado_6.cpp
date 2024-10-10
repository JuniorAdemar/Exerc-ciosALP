/*Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
dias consecutivos e calcule:
a. O total de tempo exercitado na semana.
b. A média de tempo diário.
c. O dia em que o paciente realizou o maior tempo de exercício.*/

#include <iostream>

int main(){
    int ex_time[8], sum, mid = 0, i=1, best_time=0;

    for(i=1; i<=7; i++){
        std::cout<<"Digite a minutagem de exercícios do dia "<<i<<" da semana"<<std::endl;
        std::cin>>ex_time[i-1];
        sum += ex_time[i-1];
        if((i>=1)&&(ex_time[i]>=ex_time[i-1])){
                        best_time = ex_time[i];
        }
    }
    mid = sum/i;

    std::cout<<"Total de tempo exercitado na semana: "<<sum<<std::endl;
    std::cout<<"A média de tempo diário: "<<mid<<std::endl;
    std::cout<<"Dia em que o paciente realizou o maior tempo de exercício: "<<best_time<<std::endl;




    




    return 0;
}