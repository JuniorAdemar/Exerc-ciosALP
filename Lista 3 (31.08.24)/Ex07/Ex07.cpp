/*7) Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.
*/
#include <iostream>
using namespace std;

#define MAX_DISCOUNT 318.20

int main(){
    string messege1 = "Qual o salario?";
    string messege2 = "O valor do desconto eh: ";
    float num1;
    float result;

    cout<<messege1<<endl;

    if(cin>>num1)
    {
        result = num1*0.11; //calcula o valor do desconto

        if(result>=MAX_DISCOUNT) //testa se o valor do desconto é maior que o desconto máximo
        {
            result = MAX_DISCOUNT;
        }
    cout<<messege2<<result<<endl;

    }
    return 0;
}