/*Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. 
*/
#include <iostream>

int main(){

    int start, finish, value;
    std::cout<<"Digite o numero que queres calcular os divisores"<<std::endl;
    std::cin>>value;

    std::cout<<"Digite o intervalo que que quer que esses numeros estejam"<<std::endl;

    std::cout<<"Inicio: "<<std::endl;
    std::cin>>start;

    std::cout<<"Final: "<<std::endl;
    std::cin>>finish;

    std::cout<<"Os divisores de "<<value<<" sao:"<<std::endl;

    for(int i=start; i<=finish; i++){
        if((i%value) == 0){
            std::cout<<i<<std::endl;
        }
    }






}