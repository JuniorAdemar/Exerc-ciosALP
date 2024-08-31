/*2. Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a
cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o
valor total em reais que ele precisará pagar.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float valueDolarToReal; 
    float valueDolarToBuy;
    float valueReal;

    cout<<"Digite a cotacao do dolar"<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>valueDolarToReal){
        cout<<"Digite a quantidade de dolares que voce quer comprar"<<endl;
        if(cin>>valueDolarToBuy)
        {
            valueReal = valueDolarToBuy * valueDolarToReal;
            cout<<"Valor a pagar em reais: R$"<<fixed<< setprecision(2)<<valueReal<<endl;
        }
        else
        {
            cout<<"Voce nao digitou um numero valido"<<endl;
            return 1;
        }
    }
    else
    {
        cout<<"Voce nao digitou um numero valido"<<endl;
        return 1;
    }
    return 0;

}