/*10) Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.*/

#include <iostream>
#include <ctime>
using namespace std;


int main(){
    string messege1 = "Quantas faces voce quer o dado?";
    string messege2 = "Valor invalido";
    int random_number;
    int answer;

    srand(time(0));

    cout<<messege1<<endl;
    cin>>answer;

    switch(answer){
        case 4:
        random_number = (rand() %4)+1;
        cout<<random_number<<endl;
        break;
        case 6:
        random_number = (rand() %6)+1;
        cout<<random_number<<endl;
        break;
        case 8:
        random_number = (rand() %8)+1;
        cout<<random_number<<endl;
        break;
        case 10:
        random_number = (rand() %10)+1;
        cout<<random_number<<endl;
        break;
        case 12:
        random_number = (rand() %12)+1;
        cout<<random_number<<endl;
        break;
        default:
        cout<<messege2<<endl;
        break;
    }

    return 0;

}