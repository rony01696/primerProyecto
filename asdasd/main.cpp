#include <iostream>
using namespace std;
int main() {

    int a;
    int b;
    int c;
    
    cout<<"INGRESE EL VALOR DE A: ";
    cin>>a;
    cout<<"INGRESE EL VALOR DE B: ";
    cin>>b;
    cout<<"INGRESE EL VALOR DE C: ";
    cin>>c;

    if(a>b && a>c)
        cout<<"A ES EL MAYOR";
    else
        if(b>c)
            cout<<"B ES EL MAYOR";
        else
            cout<<"C ES EL MAYOR";

  return 0;
}

