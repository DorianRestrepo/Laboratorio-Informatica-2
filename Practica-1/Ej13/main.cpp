#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero:";
    cin >> n;
    cout <<"Los divisores del numero ingresado son:";
    if(n<0){
        n*=-1;
    }
    if(n==0){
        cout<<"El 0 tiene infinitos divisores.";
    }
    else {
        for (int i = 1;i<=n;i++){
            if((n%i)== 0){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
