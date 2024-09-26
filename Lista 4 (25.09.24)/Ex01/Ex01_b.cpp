/*b. Gerar e escrever os números pares do intervalo [20,50].*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    for(int i=20; i<50+1; i++){
        if(i%2 == 0){
            cout<<i<<endl;
        }
    }
    
}