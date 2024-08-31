/*Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o
peso do prato do cliente e calcule o valor a ser pago.*/
#define BUFFET_PRICE 40

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float valuePlateKG; 
    float valueToBePaid;

    cout<<"Digite quantos KG possui o prato"<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>valuePlateKG){
        valueToBePaid = valuePlateKG*BUFFET_PRICE; //cálculo solicitado

        cout<<"O preco do buffet eh: R$"<<fixed<<setprecision(2)<<valueToBePaid<<endl;
    }
    else
    {
        cout<<"Voce nao digitou um numero valido"<<endl;
        return 1;
    }
    return 0;

}