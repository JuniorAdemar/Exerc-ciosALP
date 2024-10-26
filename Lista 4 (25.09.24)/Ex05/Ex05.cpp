/*Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos.*/

#include <iostream>

int main(){
    int x, i, nota[4]; //tem 4 posições porque tive um overflow, não sei exatamente o porque
    float general_avarage, soma = 0, media;
    char subs_degree;

    std::cout<<"Digite a quantidade de alunos para inserir as notas"<<std::endl;
    std::cin>>x;

    for(i=0; i<x; i++){
        
        std::cout<<"Digite a nota do aluno "<<i+1<<" no grau A:"<<std::endl;
        std::cin>>nota[1];
        std::cout<<"Digite a nota do aluno "<<i+1<<" no grau B:"<<std::endl;
        std::cin>>nota[2];
        media = (nota[1]+(nota[2]*2))/3;

        if(media<6){
            std::cout<<"Qual grau deve ser substituido (A/B)?"<<std::endl;
            std::cin>>subs_degree;

            if((subs_degree=='A')||(subs_degree=='a')){

                std::cout<<"Abaixo da media, digite a nota do aluno "<<i+1<<" no grau C:"<<std::endl;
                std::cin>>nota[3];

                media = (nota[3]+(nota[2]*2))/3;

            }else if((subs_degree=='B')||(subs_degree=='b')){

                std::cout<<"Abaixo da media, digite a nota do aluno "<<i+1<<" no grau C:"<<std::endl;
                std::cin>>nota[3];

                media = (nota[1]+(nota[3]*2))/3;
            }
            else{
                std::cout<<"Voce digitou um valor invalido, o grau C sera desconsiderado"<<std::endl;
            }
            
        }

        if(media<6){
                std::cout<<"Aluno "<<i+1<<" : REPROVADO"<<std::endl;

        }else{
                std::cout<<"Aluno "<<i+1<<" : APROVADO"<<std::endl;

        }

        soma += media;

    }
    general_avarage = (soma)/x;

    std::cout<<"Media geral dos alunos: "<<general_avarage<<std::endl;



    return 0;
}