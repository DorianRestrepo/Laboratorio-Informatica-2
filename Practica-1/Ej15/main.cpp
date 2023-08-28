#include <iostream>

using namespace std;

int main()
{
    float n,sum;
    n = -1;
    sum = 0;
    while (n !=0){
        cout <<"Ingrese un numero:";
        cin >> n;
        sum =sum + n;
    }
    cout << "La suma de los numeros ingresados es :"<<sum;
    return 0;
}
