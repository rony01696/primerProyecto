#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    cout<<"Ingrese c: ";
    cin>>c;
    if (a>b && a>c)
        cout<<"a es mayor"<<endl;
    if (b>a && b>c)
        cout<<"b es mayor"<<endl;
    if (c>a && c>b)
    cout<<"c es mayor"<<endl;
    return 0;
}
