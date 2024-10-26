/*6. Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
dos valores sorteados.*/

#include <iostream>
#include <time.h>


int main(){
    int n, mid = 0, bigger = 0, smaller = 100;
    std::cout<<"Sorteio de 5 valores de 0 a 100 :)"<<std::endl;

    srand((unsigned int)time(0));

    for(int i = 0; i<5; i++){

        n = rand()%100+1;
        std::cout<<"Valor sorteado "<<i+1<<": "<<n<<std::endl;

        if((n>=bigger)){

            bigger = n;

        }else if(n<=smaller){
            smaller = n;
        }

        mid += n;

    }

    std::cout<<"Maior valor sorteado: "<<bigger<<std::endl;
    std::cout<<"Menor valor sorteado: "<<smaller<<std::endl;
    std::cout<<"Media dos valores sorteados: "<<(mid/5)<<std::endl;


    return 0;
}