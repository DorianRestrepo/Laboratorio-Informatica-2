#include <iostream>

using namespace std;

int main()
{
    int n,div;
    div = 0;
    cout<<"Ingrese un numero:";
    cin>>n;
    if(n < 0){
        cout<<"Solo ingrese numeros positivos.";
    }
    else{
        for(int i = 1;i<=n;i++){
            if (n%i == 0){
                div ++;
            }
        }
    }
    if (div == 2){
        cout<< n<< " es un numero primo.";
    }
    else{
        cout<< n<< " NO es un numero primo.";
    }
    return 0;
}
