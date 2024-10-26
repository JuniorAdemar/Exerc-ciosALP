/*Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.*/
/*'A'	65
'B'	66
'C'	67
...	...
'Z'	90
'a'	97
'b'	98
'c'	99
...	...
'z'	122
'0'	48
'1'	49
'2'	50
...	...
'9'	57
SPACE	32
'\n' (newline)	10
'\t' (tab)	9*/
#include <iostream>
#include <string>

int main(){
    std::string nome, first_name;
    int first = 122;


    std::cout<<"Informe 5 nomes:"<<std::endl;

    for(int i=0; i<5; i++){

         std::cin>>nome;

         if(nome[1]<first){
            first_name = nome;
         }

    }


    std::cout<<"O primeiro em ordem alfabetica eh: "<<first_name<<std::endl;



    return 0;
}