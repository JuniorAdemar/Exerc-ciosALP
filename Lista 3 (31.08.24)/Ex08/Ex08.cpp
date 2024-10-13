/*8) Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
tela o valor de venda.*/
//usando switch e case

#include <iostream>
using namespace std;

int main(){
string messege1 = "Entre com o valor da compra: ";
    string messege2 = "O valor do produto eh: ";
    string messege3 = "Voce nao digitou um valor valido";
    string messege4 = "";
    float num1;
    float selling_price;

    cout<<messege1<<endl;

    if(cin>>num1)
    {
        if(num1<=20)
        {
            selling_price = num1+(num1*0.45);
        }
        else if(num1>20 && num1<=50)
        {
            selling_price = num1+(num1*0.35);
        }
        else
        {
            selling_price = num1+(num1*0.25);
        }
        cout<<messege2<<selling_price<<endl;
    }
    else
    {
        cout<<messege3<<endl;
    }
    

    return 0;
}