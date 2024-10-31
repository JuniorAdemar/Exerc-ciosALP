/*4. Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
programa que:
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
b. Calcule o total de passos dados na semana.
c. Calcule a média diária de passos.
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
informe quais dias a meta foi alcançada.
*/
#include <iostream>
#include <vector>

#define WEEKDAYS 7

int main(){
    int sum = 0, average = 0, j = 0, k = 0;
    std::vector<int> monitDays(7,0), data(8,0);


    std::cout<<"Digite os passos nos dias da semana:"<<std::endl;

    for(int& i : monitDays){
        j++;

        std::cin>>i;
        sum +=i;

        if(i>=10000){
            data[j]++;
        }

    }
        std::cout<<"A soma dos passos semanais eh: "<<sum<<std::endl;
        std::cout<<"A media diaria de passos eh: "<<(float)sum/WEEKDAYS<<std::endl;

    
    for(const int& i: data){
        if(i>0){
            std::cout<<"A meta de 10.000 passos foi atingida no dia "<<k<<" da semana."<<std::endl;
        }
        k++;

    }
}