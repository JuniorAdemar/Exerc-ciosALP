/*3. Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número. 
*/
#include <iostream>

void multTable(int numb){
    int result;
    for(int i=1; i<=10; i++){

        result = numb*i;
        std::cout<<numb<<" x "<<i<<" = "<<result<<std::endl;

    }
}

int main(){
    int n;
    char ans;
    do{
        std::cout<<"Digite o numero de 1 a 9 que voce deseja ver a tabuada"<<std::endl;
        std::cin>>n;
        
        switch(n){
            case 1:
            multTable(1);
            break;

            case 2:
            multTable(2);
            break;

            case 3:
            multTable(3);
            break;

            case 4:
            multTable(4);
            break;

            case 5:
            multTable(5);
            break;

            case 6:
            multTable(6);
            break;

            case 7:
            multTable(7);
            break;

            case 8:
            multTable(8);
            break;

            case 9:
            multTable(9);
            break;

            default:
            std::cout<<"Numero invalido"<<std::endl;
            break;

        }
        std::cout<<"Calcular outro numero (s/n)?"<<std::endl;
        std::cin>>ans;
    }while(ans!=n);

}