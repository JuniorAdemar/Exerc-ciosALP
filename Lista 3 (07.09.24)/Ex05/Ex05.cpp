/*5) Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar.*/
#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite um numero";
string messege1 = "Voce nao digitou um numero";
string messege2 = "Eh PAR";
string messege3 = "Eh IMPAR";


int main(){
    //variáveis para operações
    int num1;

    cout<<messege0<<endl;

    if((cin>>num1))//testa se a entrada 1 falhou
    {
        
            if(num1 % 2 == 0)
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
