/*1. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
Depois disso, implemente algoritmos para:
a. Imprimir o vetor
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
c. Verificar o número de ocorrências do valor 50 neste vetor.
d. Calcular a média dos valores do vetor
e. Encontrar o maior e o menor valor dos elementos do vetor.
f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
g. Imprimir o vetor em ordem inversa
h. Copiar os elementos em ordem inversa para outro vetor.
i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
acessar os vetores depois).*/
#include <iostream>
#include <vector>
#include <time.h>


#define SORTED_NUMBERS 10

int main()
{
    //declaracao de variaveis
    std::vector<int> vet, vPares, vImpares;
    int num, val50 = 0, bigger = 0, smaller = 90;
    long long int product = 1;
    float Sum = 0, average = 0;

    //reserva memoria pro vetor, melhor pra performance
    vet.reserve(10);

    //da a seed pra funcao rand
    srand(time(0));

    //sorteia e adiciona no final do vetor
    for (int i = 0; i < SORTED_NUMBERS; i++)
    {
        num = rand() % 80 + 1;
        vet.push_back(num);
    }
    std::cout << "Valores sorteados no vetor:" << std::endl;


    //loop no vetor
    for (const int &i : vet)
    {
        //printa na tela o numero sorteado pro vetor
        std::cout << i <<"   ";

        //verifica se é par ou impar
        if(i%2 == 0)
        {
            vPares.push_back(i);
        }
        else
        {
            vImpares.push_back(i);
        }


        if (i == 50)
        {
            val50++;
        }

        //adiciona o valor na soma e multiplica no produto
        Sum += i;
        product = product * i;

        //verifica qual o maior e o menor
        if (i > bigger)
        {
            bigger = i;
        }
        if (i < smaller)
        {
            smaller = i;
        }
    }

    //verifica as ocorrencias do 50
    std::cout<<std::endl;
    if(val50>=1){
        std::cout << "Houve ocorrencia do valor 50" << std::endl;
        std::cout << "Numero de ocorrencias do valor 50: " << val50 << std::endl;
    }
    else{
        std::cout << "Nenhuma ocorrencia do valor 50" << std::endl;

    }

    //calcula a media
    average = Sum / SORTED_NUMBERS;

    //imprime as métricas solicitadas
    std::cout << "Media dos valores do vetor: " << average << std::endl;
    std::cout << "Maior: " << bigger << std::endl;
    std::cout << "Menor: " << smaller << std::endl;
    std::cout << "Soma dos valores do vetor: " << Sum << std::endl;
    std::cout << "Produto dos valores do vetor: " << product << std::endl;


    //imprime os valores pares do vetor
    std::cout << "Pares no vetor: " << std::endl;
    for(const int& i : vPares)
    {
        std::cout << i << "  ";
    }
    std::cout << std::endl;


    //imprime os valores impares do vetor
    std::cout << "Impares no vetor: " << std::endl;
    for(const int& i : vImpares)
    {
        std::cout << i << "  ";
    }
    std::cout << std::endl;



}