#include <iostream>
#include <time.h>

bool drawHamsterMovement(int *hamster){
    unsigned int draw = ((rand())%5)+1;
    if(*hamster<12){
        switch(draw){
            case 1:
                *hamster += 1;
                break;
            case 2:
                *hamster += 2;
                if(*hamster>12){
                    *hamster = 12;
                }
                break;
            case 4:
                if(*hamster>=1){
                    *hamster -= 1;
                }
                break;
            case 5:
                if(*hamster>=2){
                    *hamster -= 2;
                }
                break;
            default:
                break;
        }
    }
    else if(*hamster>=12)
    {   
        *hamster = 12;
        return 1;
    }
    return 0;

}



int main(){
    int hamster1 = 0, hamster2 = 0;

    srand((unsigned int)time(0));

    while(((drawHamsterMovement(&hamster1))||(drawHamsterMovement(&hamster2)))!=1)
    {
        std::cout<<"Posicao atual do hamster 1: "<<hamster1<<std::endl;
        std::cout<<"Posicao atual do hamster 2: "<<hamster2<<std::endl;
        std::cout<<" "<<std::endl;

    }

    if(((drawHamsterMovement(&hamster1))&&(drawHamsterMovement(&hamster2)))==1)
        {
            std::cout<<"Empatou"<<std::endl;
            return 0;
        }
        else if((drawHamsterMovement(&hamster1)))
        {
            std::cout<<"hamster1 ganhou"<<std::endl;
            return 0;

        }
        else if(drawHamsterMovement(&hamster2)){
            std::cout<<"hamster2 ganhou"<<std::endl;
            return 0;
        }


    return 0;
}