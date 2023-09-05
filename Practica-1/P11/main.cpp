#include <iostream>

using namespace std;
int MCD(int a, int b) {
    int mcd=1;
    for (int i =1;i<=max(a,b);i++){
        if((a%i==0)&& (b%i==0)){
            mcd = mcd*i;
        }
    }
    return mcd;
}

int MCM(int a, int b) {
    return (a * b) / MCD(a, b);
}

int main() {
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    int mcm = 1;

    for (int i = 2; i <= n; i++) {
        mcm = MCM(mcm, i);
    }

    cout << "El minimo comun multiplo es: " << mcm << endl;

    return 0;
}






