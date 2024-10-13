/*2) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
+ C.*/

#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite os valores A, B e C";
string messege1 = "Você nao digitou um numero";
string messege2 = " eh maior que ";
string messege3 = "a soma de A e B: ";
string messege4 = "a soma de A e C: ";
string messege5 = " eh igual ";



//string messege3 = "Voce digitou o 0 como divisor, isso nao eh permitido nesse programa";


int main(){
    //variáveis para operações
    float num1, num2, num3, result1, result2;

    cout<<messege0<<endl;

    if((cin>>num1))//testa se a entrada 1 falhou
    {
        if(cin>>num2)//testa se a entrada 2 falhou
        {
            if(cin>>num3)
            {
                //soma os numeros 1 e 2, 1 e 3.
                result1 = num1+num2;
                result2 = num1+num3; 

                if(result1>result2)
                {
                    //exibe a comparação na tela
                    cout<<fixed<<setprecision(2)<<messege3<<result1<<messege2<<messege4<<result2<<endl;
                }
                else if(result1<result2)
                {
                    cout<<fixed<<setprecision(2)<<messege4<<result2<<messege2<<messege3<<result1<<endl;
                }
                else
                {
                    cout<<fixed<<setprecision(2)<<messege4<<result2<<messege5<<messege3<<result1<<endl;

                }
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