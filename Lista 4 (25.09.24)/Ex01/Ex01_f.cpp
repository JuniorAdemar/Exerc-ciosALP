/*f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos. 
*/
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

int main(){
    int a;
    int j, k = 0;


    cout<<"Digite 10 numeros inteiros"<<endl;

    for(int i=0; i<10; i++){
        
        cin>>a;
        if(a%2 == 0){
            k++;
        }else{
            j++;
        }
        
    }
    cout<<"Pares: "<<k<<endl;
    cout<<"Impares: "<<j<<endl;
}