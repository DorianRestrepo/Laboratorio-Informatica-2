#include <iostream>

using namespace std;

int main()
{
    int n;
    float mid;
    cout << "Ingrese un numero impar:";
    cin>>n;
    if (n%2 == 0){
        cout<<n<<" no es un numero impar.";
    }
    else{
        for (int i = 1; i <= n;i+=2) {
            for (int j = 1; j <=(n-i)/2; j++) {
                cout<<" ";
            }
            for (int  k= 1;  k <= i; k++) {
                cout<<"*";
            }
            cout<<endl;
        }
        for (int i = n -2; i >= 1; i-=2) {
            for (int j = 1; j <=(n-i)/2; j++) {
                cout<<" ";
            }
            for (int  k= 1;  k <= i; k++) {
                cout<<"*";
            }
            cout<<endl;
        }

    }
    return 0;
}
