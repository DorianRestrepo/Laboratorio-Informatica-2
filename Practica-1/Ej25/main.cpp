#include <iostream>

using namespace std;

int main()
{
    int n,aux,dig;
    dig = 1;

    cout<<"Ingrese un numero: ";
    cin>>n;
    aux = n;

    while(aux > 1){
        aux= aux /10;
        dig ++;
    }
    cout<< n <<" tiene "<<dig<<" digitos.";
    return 0;
}
