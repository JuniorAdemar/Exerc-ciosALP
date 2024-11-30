/*6. Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
programa que:
a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
acumulada de um jogador.
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
mensagem de "Rodada de Destaque" para esse jogador.
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).*/
#include <iostream>
#include <vector>
#include <time.h>

#define ROUNDS 5
#define PLAYERS 5




int main(){
    std::vector player(PLAYERS, 0);
    int drawNumber;
    std::vector<int> winner(2, 0), winnerPoints(2, 0);

    srand(time(0));

    std::cout<<"Começando o jogo, ele possui "<<ROUNDS<<" rodadas e "<<PLAYERS<<" jogadores :)"<<std::endl;

    for(int i = 0; i<ROUNDS; i++){

        for(int j=0; j<PLAYERS-1; j++){
            drawNumber = rand()%2+1; //sorteia de 0 a 100
            player[j] += drawNumber; //adicioina a pontuação sorteada no valor do vetor
            std::cout<<j+1<<" : "<<player[j]<<"   ";
            if(drawNumber>80){
                std::cout<<"Rodada Destaque    ";
            }
        }
        std::cout<<std::endl;
    }

    for(int i = 0; i<player.size(); i++){

        if(player[i]>=winnerPoints[0]){
            if(player[i] == winnerPoints[0]){
                winner[1] = i+1;
                winnerPoints[1] = winnerPoints[0];
            }

            winnerPoints[0] = player[i];
            
            winner[0] = i+1; //define o ganhador se for maior que a pontuação do player anterior
        }
    }
    if(winner[0] == winner[1]){
        std::cout<<"Empatou entre o "<<winner[0]<<" e o " <<winner[1]<< " sua pontuacao eh: "<<winnerPoints[0]<<std::endl;

    }else{
        std::cout<<"Ganhador eh o jogador "<<winner[0]<<" e a sua pontuacao eh: "<<winnerPoints[0]<<std::endl;
    }

//TODO: resolver o problema do empate, define o mesmo jogador pro empate, não faz sentido.
}