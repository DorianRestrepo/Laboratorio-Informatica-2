#include <iostream>

using namespace std;

int main()
{
    float a,p,r,pi = 3.1416;
    cout<<"Ingrese el radio de su circulo:";
    cin>>r;
    if(r<0){
        cout<<"El radio no puede ser menor a 0";
    }
    else{
        p=2*pi*r;
        a=pi*r*r;
        cout<<"Perimetro:"<<p<<endl<<"Area:"<<a;
    }





    return 0;
}
