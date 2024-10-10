#include <iostream>
#include <vector>
using namespace std;
/*1. Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a
porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.*/

int main(){
    float answer, positive = 0, negative = 0, div2 = 0, div5 = 0;
    int i = 0;
    char vet[500];
    
    cout<<"Digite os numeros, para parar digite 0"<<endl;

    do{
        cin>>answer;
        vet[i] = answer;
        i++;

    }
    while(answer!= 0);

    for(int j = 0; j<i; j++){
        if(vet[j]>0){
            positive++;

            if((vet[j]%2)==0){

                div2++;

            }else if((vet[j]%5)==0){

                div5++;

            }

        }else if(vet[j]<0){

            negative++;

            if((vet[j]%2)==0){

                div2++;

            }else if((vet[j]%5)==0){

                div5++;

            }
        }
    }
    float sumP = (positive*100)/(i-1);
    float sumN = (negative*100)/(i-1);
    float sum2 = (div2*100)/(i-1);
    float sum5 = (div5*100)/(i-1);
    
    cout<<"Positivos "<<sumP<<"%"<<endl;
    cout<<"Negativos "<<sumN<<"%"<<endl;
    cout<<"Divisíveis por 2 "<<sum2<<"%"<<endl;
    cout<<"Divisíveis por 5 "<<sum5<<"%"<<endl;

}