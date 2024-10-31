/*2. Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
12 e 20.*/

#include <iostream>
#include <vector>

int main(){

    std::vector<int> vet;
    vet.reserve(5);

    std::cout<<"Digite os 5 valores para inserir dentro do vetor:"<<std::endl;

    for(int i=0; i<5; i++){
        std::cin>>vet[i];
    }

    std::cout<<"Os valores multiplicados pelo seu índice são:"<<std::endl;

    for(int i=0; i<5; i++){
        std::cout<<vet[i]*i<<" ";
    }

    return 0;
}