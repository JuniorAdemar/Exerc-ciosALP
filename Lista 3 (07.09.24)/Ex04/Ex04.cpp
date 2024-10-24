/*4) Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.*/
#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite um numero";
string messege1 = "Voce nao digitou um numero";
string messege2 = "O numero eh divisivel por 3";
string messege3 = "O numero nao eh divisivel por 3";


int main(){
    //variáveis para operações
    int num1;

    cout<<messege0<<endl;

    if((cin>>num1))//testa se a entrada 1 falhou
    {
        
            if(num1 % 3 == 0)
            {
                cout<<fixed<<setprecision(2)<<messege2<<endl;
            }
            else
            {
                cout<<messege3<<endl;
            }
    }
    else
    {
        cout<<messege1;
    }
}
