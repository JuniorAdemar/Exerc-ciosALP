/*6. A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
um dia e calcule o total arrecadado*/

#include <iostream>
#include <iomanip>
using namespace std;

#define SMARTPHONE_PRICE 1000
#define TABLET_PRICE 1500


string messege1 = "Quantos smartphones foram vendidos?";
string messege2 = "Quantos tablets foram vendidos?";
string finalMessege = "Faturamento total:";
string invalidInput = "Voce nao digitou um valor valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float value1; 
    float value2;
    float finalValue;

    cout<<messege1<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>value1){
        cout<<messege2<<endl;
        if(cin>>value2)
        {
            finalValue = value1*SMARTPHONE_PRICE + value2*TABLET_PRICE; //calculo solicitado pelo exercício
            
            cout<<finalMessege<< fixed << setprecision(2) <<finalValue<<endl;
        }
        else
        {
            cout<<invalidInput<<endl;
            return 1;
        }
    }
    else
    {
        cout<<invalidInput<<endl;
        return 1;
    }
    return 0;

}