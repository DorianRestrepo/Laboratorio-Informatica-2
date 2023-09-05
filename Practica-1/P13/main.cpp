#include <iostream>

using namespace std;
int Primo(int n){
    int div = 0;
    for(int i = 1;i<=n;i++){
        if (n%i == 0){
            div ++;
        }
    }

    if (div == 2){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n,sum;
    sum = 0;
    cout<<"ingresa un numero positivo:";
    cin>>n;
    if(n<0){
        cout<<"Por favor solo numeros negativos.";

    }
    else{
        for(int i = 1;i<n;i++){
            if(Primo(i)){
                sum = sum + i;
            }
        }
        cout<<"El resultado de la suma es:"<<sum;

    }
    return 0;
}
