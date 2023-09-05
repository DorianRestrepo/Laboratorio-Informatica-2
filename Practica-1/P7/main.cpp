#include <iostream>

using namespace std;

int main()
{
    int n,a,b,sum,aux;
    cout << "Ingrese un numero entero positivo:";
    cin>>n;
    sum = 0;
    a = 1;
    b = 1;
    while(a<n) {
        if(a%2 == 0){
            sum = sum + a;
        }
        aux = a;
        a = b;
        b = b + aux;
    }
    cout<<"El resultado de la suma es:"<<sum;
    return 0;
}
