/*3. Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.
*/
#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    int N, input;
    std::vector<int> vet;
    std::vector<int> data(6,0);


    std::cout<<"Digite o numero N de vezes para lancar o dado"<<std::endl;
    std::cin>>N;

    for(int i=0; i<N; i++){

        std::cin>>input;
        vet.push_back(input);

        switch(vet[i]){
            case 1:
                data[0]++;
                break;
            case 2:
                data[1]++;
                break;
            case 3:
                data[2]++;
                break;
            case 4:
                data[3]++;
                break;
            case 5:
                data[4]++;
                break;
            case 6:
                data[5]++;
                break;
            default:
                break;
        }
        
    }

    for(int i=1; i<=6; i++){
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"Porcentagem do numero "<<i<<" "<<((data[i-1])/(float)N)*100<<std::endl;
    }

}