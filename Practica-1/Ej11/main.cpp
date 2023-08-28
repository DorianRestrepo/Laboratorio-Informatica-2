#include <iostream>

using namespace std;

int main()
{
    float n;
    cout<<"Ingrese un numero:";
    cin>>n;
    for(int i = 1;i<=10;i++){
        cout<<i<<"x"<<n<<"="<<i*n<<endl;
    }
    return 0;
}
