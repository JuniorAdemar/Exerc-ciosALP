#include <iostream>

using namespace std;
int main(){
    char alternativa;
    char correta = 'a';

    cout <<"Qual eh o verdadeiro nome do super-heroi Batman?"<< endl;
    cout <<"a) Bruce Wayne"<< endl;
    cout <<"b) Clark Kent"<< endl;
    cout <<"c) Peter Parker"<< endl;
    cout <<"d) Tony Stark"<< endl;
    cout <<"e) Steve Rogers"<< endl;

    cin >> alternativa;

    if(alternativa == correta){

        cout <<"Voce respondeu alternativa "<<alternativa<<", ela esta correta!!"<<endl;

    }else{
        cout <<"Voce respondeu alternativa "<<alternativa<<", a correta eh a alternativa "<<correta<<endl;
    }

}