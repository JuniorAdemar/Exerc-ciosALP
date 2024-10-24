/*1) Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.*/

#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite dois numeros para dividir, primeiro o dividendo e apos o divisor";
string messege1 = "Voce nao digitou um numero";
string messege2 = "O resultado da divisao eh:";
string messege3 = "Voce digitou o 0 como divisor, isso nao eh permitido nesse programa";


int main(){
    //variáveis para operações
    float num1, num2, result;

    cout<<messege0<<endl;

    if((cin>>num1))//testa se a entrada 1 falhou
    {
        if(cin>>num2)//testa se a entrada 2 falhou
        {
            if(num2 != 0)
            {
                result = num1/num2;
                cout<<fixed<<setprecision(2)<<messege2<<result<<endl;
            }
            else
            {
                cout<<messege3<<endl;
            }
        }
        else
        {
            cout<<messege1<<endl;

        }
    }
    else
    {
        cout<<messege1;
    }


    return 0;
}