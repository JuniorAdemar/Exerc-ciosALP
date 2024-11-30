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
#define PLAYERS 4
#define MAXPOINTS 2


int main(){
    std::vector<int> players(PLAYERS, 0), winner; //pontuações dos players, cada número do índice é um player
    int drawnPoints, winnerPoints = 0, control = 0;
    bool draw = 0;

    srand(time(0)); //seta a semente pra rand()
    for(int i=0; i<ROUNDS; i++){ //for para rouds

        for(int j=0; j<PLAYERS; j++){//for para os players

            drawnPoints = rand()%(MAXPOINTS+1); //sorteia e atribui o valor aleatório
            players[j] += drawnPoints;

            std::cout<<j+1<<":"<<players[j]<<" "; //printa a pontuação de cada player

            if(players[j]>winnerPoints){
                winnerPoints = players[j];
            }


            if(drawnPoints>80){ //teste da rodada destaque
                std::cout<<"<--Rodada destaque ";
            }
        }
        std::cout<<std::endl;

    }


    for(int i=0; i<PLAYERS; i++){ //testa se houve empate
        if(players[i] == winnerPoints){

            winner.push_back(i);

            if(winner.size()>1){
                draw = 1;
            }

        }
    }

    if(draw){
        std::cout<<"Empatou entre os players: ";
        for(const int& player : winner){
            std::cout<<player+1;
            std::cout<<", ";
        }
        std::cout<<"sua pontuacao eh:"<<winnerPoints;

    }else{
        std::cout<<"Ganhador: "<<winner[0]+1<<" com pontuacao de: "<<winnerPoints;

    }


}