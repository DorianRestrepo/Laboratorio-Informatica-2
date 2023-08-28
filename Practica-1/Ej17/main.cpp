#include <iostream>

using namespace std;

int main()
{
    float n,mayor;
    bool b;
    b = true;
    mayor = 0;
    while(b){
        cout << "Ingrese un numero:";
        cin >> n;

        if (n == 0){
            b = false;
        }
        else if(n>mayor){
            mayor = n;
        }
    }
    cout<<"El numero mas grande ingresado fue:"<<mayor;
    return 0;
}
