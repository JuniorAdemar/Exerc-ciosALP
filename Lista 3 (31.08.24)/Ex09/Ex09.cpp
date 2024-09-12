#include <iostream>
using namespace std;

int main(){
string messege1 = "Entre com o valor da compra: ";
    string messege2 = "O valor do produto eh: ";
    string messege3 = "";
    string messege4 = "";
    float num1;
    float selling_price;

    cout<<messege1<<endl;

    cin>>num1;

    if(num1<=20)
    {
        selling_price = num1+(num1*0.45);
    }
    else if(num1>20 && num1<=50)
    {
        selling_price = num1+(num1*0.35);
    }
    else
    {
        selling_price = num1+(num1*0.25);
    }
    cout<<messege2<<selling_price<<endl;

    return 0;
}