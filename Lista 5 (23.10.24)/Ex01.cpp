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

#define SORTED_NUMBERS 10

int main()
{
    std::vector<int> vet;
    int num, val50 = 0, bigger = 0, smaller = 90;
    long long int product = 1;
    float averageSum = 0, average = 0;

    srand(time(0));

    // sorteia e adiciona no final do vetor, vetor não teve nenhum valor alocado anteiormente, ruim pra performance, mas simplifica.
    for (int i = 0; i < SORTED_NUMBERS; i++)
    {
        num = rand() % 80 + 1;
        vet.push_back(num);
    }

    // faz as operações com o vetor, i referencia um valor existente em vet, não copiando-o,
    for (const int &i : vet)
    {
        std::cout << i << std::endl;
        if (i == 50)
        {
            val50++;
        }

        averageSum += i;
        product = product * i;


        if (i > bigger)
        {
            bigger = i;
        }
        if (i < smaller)
        {
            smaller = i;
        }
    }

    average = averageSum / SORTED_NUMBERS;
    if(val50>=1){
        std::cout << "Houve ocorrencia do valor 50: " << val50 << std::endl;
        std::cout << "Numero de ocorrencias do valor 50: " << val50 << std::endl;
    }
    else{
        std::cout << "Nenhuma ocorrencia do valor 50" << std::endl;

    }
    std::cout << "Media dos valores do vetor: " << average << std::endl;
    std::cout << "Maior: " << bigger << std::endl;
    std::cout << "Menor: " << smaller << std::endl;
    std::cout << "Soma dos valores do vetor: " << averageSum << std::endl;
    std::cout << "Produto dos valores do vetor: " << product << std::endl;



}