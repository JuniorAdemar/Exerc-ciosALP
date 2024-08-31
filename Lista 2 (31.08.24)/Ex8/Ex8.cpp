/*8. Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.*/

#include <iostream>
#include <iomanip>
using namespace std;

#define CELSIUS_TO_FAHRENHEIT (1.8)+32


string messege1 = "Digite o valor em Graus Celsius: ";
string messege2 = "";
string finalMessege = "Valor convertido para Fahrenheit: ";
string invalidInput = "Voce nao digitou um valor valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float value1;
    float finalValue;

    cout<<messege1<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>value1){
            finalValue = value1*CELSIUS_TO_FAHRENHEIT; //calculo solicitado pelo exercício
            
            cout<<finalMessege<< fixed << setprecision(2) <<finalValue<<endl;
        }
        else
        {
            cout<<invalidInput<<endl;
            return 1;
        }
    return 0;

}