/*Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos. 
*/
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


int main(){
    using namespace std;

    int a, positive = 0, negative = 0, null = 0;
    vector<int> V;
    srand(time(0));

    std::cout<<"Sorteio dos 20 numeros:"<<endl;

    for(int i=0; i<20; i++){
        V.push_back(rand()%-10);

        if(V.at(i)>0)
        {
            cout<<V.at(i)<<" POSITIVO"<<endl;
            positive++;
        }
        else if(V.at(i)<0)
        {
            cout<<V.at(i)<<" NEGATIVO"<<endl;
            negative++;
        }
        else
        {
            cout<<V.at(i)<<" NULL"<<endl;
            null++;
        }

        
    }
    cout<<"Positivos: "<<positive<<endl;
    cout<<"Negativos: "<<negative<<endl;
    cout<<"Nulos: "<<null<<endl;

}