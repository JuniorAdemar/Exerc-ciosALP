/*e. Ler 15 números e escrever a soma e a média dos números lidos
*/
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

int main(){
    std::vector<int> vetor;
    int a;
    float media, soma;

    for(int i=0; i<15-1; i++){
        cin>>a;
        vetor.push_back(a);
        soma+= vetor.at(i); 
        
    }
    
    media = soma/15;
    cout<<soma<<endl;
    cout<<fixed<<setprecision(2)<<media<<endl;
}