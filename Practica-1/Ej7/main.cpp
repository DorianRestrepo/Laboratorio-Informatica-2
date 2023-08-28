#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cout<<"Ingrese un numero entero:";
    cin >>n;
    if (n > 0){
        for(int i=0; i<= n;i++){
            sum = sum + i;
        }
        cout << "La sumatoria de 0 hasta "<<n<<" es igual a "<<sum;
    }
    else if (n < 0){
        for(int i=0; i<= (n*-1);i++){
            sum = sum - i;
        }
        cout << "La sumatoria de 0 hasta "<<n<<" es igual a "<<sum;
    }
    else{
        cout<<"La sumatoria desde 0 hasta 0 es igual a 0";
    }
    return 0;
}
