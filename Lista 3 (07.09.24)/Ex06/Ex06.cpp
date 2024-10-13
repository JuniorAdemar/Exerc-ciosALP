/*6) Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu*/
#include <iostream>
#include <iomanip>

using namespace std;

//mensagens para o usuário
string messege0 = "Digite um numero de 1 a 5";
string messege1 = "Voce nao digitou um numero valido";
string messege2 = "Voce ganhou";
string messege3 = "Voce perdeu";
string messege4 = "Escolha: 1. PAR, 2. IMPAR";



int main(){
    //variáveis para operações
    int num1, num2, result;

    cout<<messege4<<endl;

    //testa se a entrada 1 falhou
    if((cin>>num2)&&((num2==1)||(num2==2)))
    {

        cout<<messege0<<endl;

            //testa se o usuario digitou um dos numeros propostos
            if((cin>>num1)&&(num1<=5)&&(num1>=0)){
                
                //pega o tempo do EPOCH em segundos para dar ao rand como seed inicial, a fim de tornar os numeros randomicos a cada execução
                srand(static_cast<unsigned int>(time(0)));
                //armazena o numero aleatorio de 0 a 5 na variavel result
                result = rand()%6;

                cout<<"O numero aleatorio somado com o seu eh: "<<(result+num1)<<endl;

                if((((result+num1)%2) == 0)&&(num2==1))
                {
                    cout<<"Voce escolheu PAR"<<endl;

                    cout<<messege2<<endl;
                }
                else if((((result+num1)%2) != 0)&&(num2==2))
                {
                    cout<<"Voce escolheu IMPAR"<<endl;

                    cout<<messege2<<endl;
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
    else
    {
        cout<<messege1;
    }
}
