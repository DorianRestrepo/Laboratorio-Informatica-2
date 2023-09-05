#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,sum;
    cout<<"Ingrese un numero mayor a 0:";
    cin>>n;
    sum = 0;
    while (n >0){
        sum = sum + pow(n%10,n%10);
        n = n/10;
        cout<<n<<"-"<<sum<<endl;
    }
    cout<<"El resultado de la suma es:"<< sum;
    return 0;
}
