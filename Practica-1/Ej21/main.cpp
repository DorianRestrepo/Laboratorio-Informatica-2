#include <iostream>
#include <cctype> //biblioteca para conversion de mayus y minus.

using namespace std;

int main()
{
    char letra;
    cout << "Ingrese solo un caracter:" ;
    cin >>letra;
    if(isalpha(letra)){
        if(islower(letra)){
            letra = toupper(letra);
        }
        else if(isupper(letra)){
            letra = tolower(letra);
        }
        cout<<"Letra convertida:"<<letra;
    }
    else{
        cout<<"Se ha ingresado algo diferente a una letra.";
    }

    return 0;
}
