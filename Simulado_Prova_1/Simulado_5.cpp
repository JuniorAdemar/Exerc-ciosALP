/*Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o
número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou
correto. O programa termina quando o usuário acerta o número.*/

#include <iostream>
#include <time.h>

int main(){
    int palp, control = 0;

    srand(time(0));

    int randNum = (rand()%100)+1;

    do{
        std::cout<<"Digite seu palpite"<<std::endl;

        std::cin>>palp;

        if(palp < randNum){

            std::cout<<"Muito baixo"<<std::endl;

        }else if(palp > randNum){

            std::cout<<"Muito alto"<<std::endl;

        }else{

            std::cout<<"Acertou!!"<<std::endl;
            control = 1;

        }
    }while(control==0);

    return 0;
}