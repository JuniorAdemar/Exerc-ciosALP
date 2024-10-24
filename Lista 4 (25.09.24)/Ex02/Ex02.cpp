/*2. Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.*/

#include <iostream>
#include <time.h>

int main(){
    int guess, n;
    srand(time(0));

    n = (rand()%10)+1;

    for(int i=1; i<4; i++){
        
        std::cout<<"Tente acertar o numero de 1 a 10, essa eh a sua "<<i<<"* tentativa"<<std::endl;
        std::cin>>guess;
        if(guess>n){
                std::cout<<"Voce errou, seu chute foi maior que o numero misterioso :O"<<std::endl;
        }
        else if(guess<n){
                std::cout<<"Voce errou, seu chute foi menor que o numero misterioso :O"<<std::endl;
        }
        else{
            std::cout<<"Voce acertou :)"<<std::endl;
            return 0;
        }

    }
    std::cout<<"Fim do programa :("<<std::endl;
    return 0;
}