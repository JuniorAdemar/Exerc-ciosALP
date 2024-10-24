/*Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
que deverão ser lidos e também deve ser lido do teclado)*/

#include <iostream>

int main(){
int n = 0, soma = 0, j;
    std::cout<<"Digite a quantidade de numeros n a ler: "<<std::endl;
    std::cin>>n;

    std::cout<<"Pode comecar a digitar os "<<n<<" numeros :)"<<std::endl;   
    for(int i=0; i<n; i++){
        std::cin>>j;

        soma += j;

    }
    std::cout<<"A soma dos "<<n<<" numeros eh: "<<soma<<std::endl;

    return 0;
}