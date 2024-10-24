/*Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos. 
*/
#include <iostream>
#include <string>
#include <iomanip>


int main(){

    int n, positive = 0, negative = 0, null = 0;
    srand(time(0));

    std::cout<<"Sorteio dos 20 numeros:"<<std::endl;

    for(int i=0; i<20; i++){
        n = (rand()%20+1)-10;
        if(n>0){
            std::cout<<"POSITIVO: "<<n<<std::endl;
            positive++;
        }
        else if(n<0){
            std::cout<<"NEGATIVO: "<<n<<std::endl;
            negative++;
        }
        else{
            std::cout<<"NULO: "<<n<<std::endl;
            null++;
        }
    }
    std::cout<<"Positivos: "<<positive<<std::endl;
    std::cout<<"Negativos: "<<negative<<std::endl;
    std::cout<<"Nulos: "<<null<<std::endl;

}