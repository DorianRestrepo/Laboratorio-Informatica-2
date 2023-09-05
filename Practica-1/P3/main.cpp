#include <iostream>

using namespace std;

int main()
{
    int dia, mes;

    cout <<"Ingrese el numero del mes:";
    cin>>mes;
    if((mes<1)||(mes>12)){
        cout<<mes<<": Es un mes invalido.";
    }
    else{
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            cout<<"Ingrese el numero del dia";
            cin>>dia;
            if (dia<1 || dia>31){
                cout<<dia<<"/"<<mes<<" es una fecha invalida";

            }
            else{
                cout<<dia<<"/"<<mes<<" es una fecha valida";
            }
        }

        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            cout<<"Ingrese el numero del dia";
            cin>>dia;
            if (dia<1 || dia>30){
                cout<<dia<<"/"<<mes<<" es una fecha invalida";

            }
            else{
                cout<<dia<<"/"<<mes<<" es una fecha valida";
            }
        }
        else{
            cout<<"Ingrese el numero del dia";
            cin>>dia;
            if (dia<1 || dia>29){
                cout<<dia<<"/"<<mes<<" es una fecha invalida";

            }
            else{
                cout<<dia<<"/"<<mes<<" es una fecha valida";
            }
        }
    }

    return 0;
}
