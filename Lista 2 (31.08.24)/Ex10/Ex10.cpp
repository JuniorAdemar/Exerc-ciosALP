/*10. O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
que você calcule quanto cada cliente gastou na loja apenas informando o número de
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
total. Exiba na tela o valor do desconto e o valor da compra.*/
#include <iostream>
#include <iomanip>
using namespace std;

#define SHIRT_PRICE 25
#define PANT_PRICE 100
#define BELT_PRICE 40
#define DISCOUNT 0.10

string messege1 = "Quantas camisetas o cliente comprou?";
string messege2 = "Quantas calcas o cliente comprou?";
string messege3 = "Quantos cintos o cliente comprou?";
string discountMessege = "Valor do desconto:";
string finalValueMessege = "Valor da compra com desconto aplicado:";
string invalidInput = "Voce nao digitou um valor valido";

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float qtdShirt; 
    float qtdPant;
    float qtdBelt;
    float discountValue;
    float finalValue;

    cout<<messege1<<endl; //exibe a mensagem 1

    if(cin>>qtdShirt){ //testa se o valor digitado é válido

        cout<<messege2<<endl; //exibe a mensagem 2

        if(cin>>qtdPant) //testa se o valor digitado é válido
        {
            cout<<messege3<<endl; //exibe a mensagem 3

            if(cin>>qtdBelt) //testa se o valor digitado é válido
            {
                float sum = (qtdShirt*SHIRT_PRICE + qtdPant*PANT_PRICE + qtdBelt*BELT_PRICE);

                discountValue = sum*DISCOUNT;

                finalValue = sum-discountValue; //calcula o valor final
            
                cout<<discountMessege<< fixed << setprecision(2) <<discountValue<<endl;
                cout<<finalValueMessege<< fixed << setprecision(2) <<finalValue<<endl;
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
    }
    else
    {
        cout<<invalidInput<<endl;
        return 1;
    }
    return 0;

}