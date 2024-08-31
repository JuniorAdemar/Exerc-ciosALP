#include <iostream>
using namespace std;
int main(){
    //declara as variáveis que guardam os minutos e segundos
    int tempoMinutos; 
    int tempoSegundos;

    cout<<"Digite o tempo em minutos"<<endl; //exibe ao usuário a mensagem que solicita que digite um valor em minutos

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>tempoMinutos){
        tempoSegundos = tempoMinutos * 60;
        cout<<"Tempo em segundos: "<<tempoSegundos<<endl;
    }
    else{
        cout<<"Voce nao digitou um numero valido"<<endl;
        return 1;
    }
    return 0;

}