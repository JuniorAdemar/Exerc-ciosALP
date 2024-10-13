/*d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    for(int i=95; i>25-1; i--){
        if(i%2!=0){
            cout<<i<<endl;
        }
        
    }
}