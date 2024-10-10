/*Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
e exiba a população ao final de cada mês, considerando a migração.*/

#include <iostream>
using namespace std;
int main(){
    int population;
    int months;

    cout<<"Digite a populacao inicial da colmeia:"<<endl;
    cin>>population;
    cout<<"Digite os meses para simular:"<<endl;
    cin>>months;

    for(int i = 1; i<=months; i++){
        population *= 2;
        population -= (population*0.03);
        cout<<"A populacao de abelhas no mes: "<<i<<", eh: "<<population<<endl;

    }




}