#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Ingrese el operador(+,-,*,/) recuerde que se opera a+b,a-b,a*c,a/c:";
    cin>>op;
    cout << "Ingrese un numero (a):";
    cin >>a;
    cout << "Ingrese un numero (b):";
    cin >>b;

    switch (op) {
        case '+':cout<<a<<"+"<<b<<"="<<a+b;

            break;

        case '-':cout<<a<<"-"<<b<<"="<<a-b;

            break;

        case '*':cout<<a<<"*"<<b<<"="<<a*b;

            break;

        case '/':
            if(b == 0){
                cout <<"Error Matematico";
            }
            else{
                cout<<a<<"/"<<b<<"="<<a/b;
            }
            break;

        default:
            break;
        }
    return 0;
}
