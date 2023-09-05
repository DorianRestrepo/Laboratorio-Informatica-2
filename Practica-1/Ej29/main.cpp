#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num,min,max;
    char a;

    min = 0;
    max = 100;
    cout<< "Por favor piense en un numero entre 0 y 100."<<endl;

    while (true){

        num = rand()%(max - min +1)+min;
        cout<<"Es " <<num <<" El numero que pensaste?\n Si el que pensaste es mayor ingrese (>) , si es menor ingrese (<) o si es igual ingrese (=):";
        cin >> a;
        if(a == '>'){
            min = num;
        }
        else if(a == '<'){
            max = num;
        }
        else if( a == '='){
            break;
        }
        else{
            cout<<"Ha ingresado un signo invalido.";
        }
    }



    return 0;
}
