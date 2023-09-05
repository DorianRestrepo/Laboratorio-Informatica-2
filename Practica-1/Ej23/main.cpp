#include <iostream>

using namespace std;

int main()
{
    int a,b,mcm,mayor,menor;
    cout<<"Ingrese un numero (a):";
    cin >> a;
    cout<<"Ingrese un numero (b):";
    cin >> b;
    if((a<= 0)|| (b<=0) ){
        cout<<"Los numeros ingresados solo pueden ser positivos";
    }
    else{
        mayor = max(a,b);
        menor = min(a,b);

        mcm = mayor;

        while (mcm % menor != 0){
            mcm = mcm + mayor;
        }
    }




    cout << "El MCM entre "<<a<<" y "<<b<<" es: "<< mcm;
    return 0;
}

