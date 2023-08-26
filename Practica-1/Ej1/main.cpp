#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "Ingrese un numerador(a): ";
    cin >> a;
    cout << "Ingrese un denominador(b): ";
    cin >> b;

    if(b != 0){
        cout <<"El residuo entre " << a <<" y " << b<<" es: "<< a%b;
    }
    else{
        cout <<"El denominador(b) no puede ser 0.";
    }

    return 0;
}
