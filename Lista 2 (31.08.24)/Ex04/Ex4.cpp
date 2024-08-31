/*4. Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do
grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau
B 2/3.*/

#define A_WEIGHT 1/3
#define B_WEIGHT 2/3

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //declara as variáveis que guardam os minutos e segundos
    float GradeA; 
    float GradeB;
    float FinalAverageGrade;

    cout<<"Digite a nota do Grau A"<<endl; //exibe ao usuário a mensagem que solicita que digite um valor

    //testa se o usuário digitou um valor válido, se não for, encerra o programa exibindo uma mensagem de advertência
    if(cin>>GradeA){
        cout<<"Digite a nota do Grau B"<<endl;
        if(cin>>GradeB)
        {
            FinalAverageGrade = GradeA*A_WEIGHT + GradeB*B_WEIGHT; //calculo solicitado pelo exercício
            
            cout<<"Media final do aluno:"<< fixed << setprecision(2) <<FinalAverageGrade<<endl;
        }
        else
        {
            cout<<"Voce nao digitou um numero valido"<<endl;
            return 1;
        }
    }
    else
    {
        cout<<"Voce nao digitou um numero valido"<<endl;
        return 1;
    }
    return 0;

}