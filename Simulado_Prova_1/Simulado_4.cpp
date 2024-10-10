/*Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
exibir uma mensagem indicando o sensor que disparou a ação.*/

#include <iostream>


int main(){
    int sensors[5];
    std::cout<<"Digite o percentual de umidade nos 5 sensores"<<std::endl;
    for(int i=0; i<5; i++){

        std::cin>>sensors[i];

    }
    for(int i=0; i<5; i++){

        if(sensors[i]<30){

            std::cout<<"O sensor "<<i<<" disparou o sistema de irrigacao"<<std::endl;

        }
    }
    return 0;
}