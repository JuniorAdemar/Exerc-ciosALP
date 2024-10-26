#include <iostream>

using namespace std;
int main(){
    char alternativa;    //declara a alternativa como char sem valor definido
    char correta = 'a'; //declara a alternativa correta

    //declaração as strings referentes ao enunciado e alternativas
    string enunciado = "Qual eh o verdadeiro nome do super-heroi Batman?";
    string alternativaA = "a) Bruce Wayne";
    string alternativaB = "b) Clark Kent";
    string alternativaC = "c) Peter Parker";
    string alternativaD = "d) Tony Stark";
    string alternativaE = "e) Steve Rogers";

    //imprime o enunciado e as alternativas
    cout <<enunciado<< endl;
    cout <<alternativaA<< endl;
    cout <<alternativaB<< endl;
    cout <<alternativaC<< endl;
    cout <<alternativaD<< endl;
    cout <<alternativaE<< endl;

    cin >> alternativa;//recolhe o char digitado pelo usuário

    //imprime a resposta ao usuário
    if(string("abcde").find(alternativa) == (std::string::npos)){
        cout <<"A alternativa digitada nao eh uma das alterntivas disponiveis"<<endl;
        return 1;
    }
    if(alternativa == correta){

        cout <<"Voce respondeu alternativa "<<alternativa<<", ela esta correta!!"<<endl;
        return 0;

    }else{
        cout <<"Voce respondeu alternativa "<<alternativa<<", a correta eh a alternativa "<<correta<<endl;
        return 0;
    }

}