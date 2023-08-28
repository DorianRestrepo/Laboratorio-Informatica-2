#include <iostream>
using namespace std;

int main()
{
    float a,b;

    cout << "Ingrese un numero(a): ";
    cin >> a;
    cout << "Ingrese un numero(b): ";
    cin >> b;

    if(a == b){
        cout <<"Ambos numeros son iguales" ;
    }
    else if (a>b){
        cout <<a<<" Es el numero mayor";
    }
    else{
        cout <<b<<" Es el numero mayor";
    }

    return 0;
}

