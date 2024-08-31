/*7. Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
leia o número de pássaros que o criador possui e calcule a quantidade total de ração
necessária por dia*/
#include <iostream>
#include <iomanip>
using namespace std;

#define BIRD_CONSUMPTION 30


string messege1 = "Quantos voce possui?";
string messege2 = "";
string finalMessege = "Quantidade de racao necessaria por dia em gramas: ";
string invalidInput = "Voce nao digitou um valor valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float value1;
    float finalValue;

    cout<<messege1<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>value1){
            finalValue = value1*BIRD_CONSUMPTION; //calculo solicitado pelo exercício
            
            cout<<finalMessege<< fixed << setprecision(2) <<finalValue<<endl;
        }
        else
        {
            cout<<invalidInput<<endl;
            return 1;
        }
    return 0;

}