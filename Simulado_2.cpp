/*Escreva um programa que sorteie:
a. Um número entre 130 e 670.
b. Um número entre -20 e -5.
c. Um número entre -10 e 10.
d. Um número entre 10.5 e 50.2, com uma casa decimal.
e. Um número entre 0 e 100, que seja múltiplo de 5.
f. Um caractere entre 'A' (65) e 'Z' (90)*/
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main(){
    srand(time(0));
    
    int num130to670 = (rand()%540+1)+130;
    int numM20toM5 = (rand()%(15+1))-20;
    int numM10to10 = (rand()%(20+1))-10;
    float num10dot5to50dot2 = (rand()%(397+1))+105;
    int num0to100mult5 = (rand()%(20)+1)*5;
    char num65to90 = (rand()%26+1)+65;





    cout<<num130to670<<endl;
    cout<<numM20toM5<<endl;
    cout<<numM10to10<<endl;
    cout<<fixed<<setprecision(1)<<num10dot5to50dot2/10<<endl;
    cout<<num0to100mult5<<endl;
    cout<<num65to90<<endl;






    


}