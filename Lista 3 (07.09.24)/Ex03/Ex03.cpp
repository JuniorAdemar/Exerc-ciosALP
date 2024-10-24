/*3) Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
o resultado*/

#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite um numero";
string messege1 = "Voce nao digitou um numero";
string messege2 = "O triplo do numero eh: ";
string messege3 = "Voce digitou o 0, ele eh uma excecao do programa";
string messege4 = "O dobro do numero eh: ";



int main(){
    //variáveis para operações
    float num1, result;

    cout<<messege0<<endl;

    if((cin>>num1))//testa se a entrada 1 falhou
    {
            if(num1 != 0)
            {
                if(num1>0)
                {
                    result = num1*2;
                    cout<<fixed<<setprecision(2)<<messege4<<result<<endl;
                }
                else if(num1<0){
                    result = num1*3;
                    cout<<fixed<<setprecision(2)<<messege2<<result<<endl;
                }
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

    return 0;
}