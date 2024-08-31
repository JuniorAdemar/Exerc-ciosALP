/*5. Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
*/

#include <iostream>
#include <iomanip>
using namespace std;

string messege1 = "Digite o valor do litro de gasolina";
string messege2 = "Digite o valor do abastecimento";
string finalMessege = "Abastecimento em litros: ";
string invalidInput = "Voce nao digitou um numero valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float literPrice; 
    float availableValue;
    float volumeOfFuel;

    cout<<messege1<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>literPrice){
        cout<<messege2<<endl;
        if(cin>>availableValue)
        {
            volumeOfFuel = availableValue/literPrice; //calculo solicitado pelo exercício
            
            cout<<finalMessege<< fixed << setprecision(2) <<volumeOfFuel<<endl;
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