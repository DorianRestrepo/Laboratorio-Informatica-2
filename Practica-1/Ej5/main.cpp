#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Ingrese un dividendo:" ;
    cin >> a;
    cout <<"Ingrese un divisor:";
    cin >> b;
    if(b == 0){
        cout << "El divisor no puede ser 0";
    }
    else{
        c = a/b;
        cout <<a<<"/"<<b<<"="<< round(c);

    }
    return 0;
}
