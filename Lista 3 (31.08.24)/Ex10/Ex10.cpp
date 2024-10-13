/*9) Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.*/

#include <iostream>

void convert(int opt, float x, float dolar, float euro)
{
    float result;
    using namespace std;
    string result_messege = "A conversao de ";
    string messege = "Digite o valor para conversao: ";
    string conversion_messege;

    switch(opt){
        case 1:
            cout<<messege<<endl;
            cin>>x;
            result = x*euro;
            conversion_messege = "Real para Euro eh: ";
            break;
        case 2:
            cout<<messege<<endl;
            cin>>x;
            result = x*dolar;
            conversion_messege = "Real para Dolar eh: ";
            break;
        case 3:
            cout<<messege<<endl;
            cin>>x;
            result = x*(euro/dolar);
            conversion_messege = "Euro para Dolar eh: ";
            break;
        case 4:
            cout<<messege<<endl;
            cin>>x;
            result = x/euro;
            conversion_messege = "Euro para Real eh: ";
            break;
        case 5:
            cout<<messege<<endl;
            cin>>x;
            result = x*(dolar/euro);
            conversion_messege = "Dolar para Euro eh: ";
            break;   
        case 6:
            cout<<messege<<endl;
            cin>>x;
            result = x/dolar;
            conversion_messege = "Dolar para Real eh: ";
            break;
    }

    cout<<result_messege<<conversion_messege<<result<<endl;

}

int main(){
    using namespace std;

    string messege1 = "Digite o valor da cotacao do real";
    string messege2 = "Digite o valor da cotacao do dolar";
    string messege3 = "Digite o valor da cotacao do euro";
    string messege4 = "Digite a opcao desejada: \n1) Converter de Real para Euro\n2) Converter de Real para Dólar\n3) Converter de Euro para Dólar\n4) Converter de Euro para Real\n5) Converter de Dólar para Euro\n6) Converter de Dólar para Real";

    int option;
    float value, dolar_cotation, euro_cotation;

    cout<<messege2<<endl;
    cin>>dolar_cotation;

    cout<<messege3<<endl;
    cin>>euro_cotation;

    cout<<messege4<<endl;
    cin>>option;

    convert(option, value, dolar_cotation, euro_cotation);
}