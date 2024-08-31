/*9. Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da
compra com o desconto. */
#include <iostream>
#include <iomanip>
using namespace std;

#define DISCOUNT 0.15


string messege1 = "Digite o valor da compra: ";
string messege2 = "";
string finalMessege = "Valor da compra com desconto aplicado: ";
string invalidInput = "Voce nao digitou um valor valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float value1;
    float finalValue;

    cout<<messege1<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>value1){
            finalValue = value1-(value1*DISCOUNT); //calculo solicitado pelo exercício
            
            cout<<finalMessege<< fixed << setprecision(2) <<finalValue<<endl;
        }
        else
        {
            cout<<invalidInput<<endl;
            return 1;
        }
    return 0;

}