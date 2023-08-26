#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese un numero (a):" ;
    cin >>a;
    cout << "Ingrese un numero (b):" ;
    cin >> b;

    if(a>b){
        cout << a << " el numero (a) es mayor.";
    }
    else if(b>a){
        cout << b << " el numero (b) es mayor.";
    }

    else{
        cout<<"Los numeros son iguales";
        }
    return 0;
    }

