#include <iostream>

using namespace std;


int main(){

    int arr[4]={1,5,7,8};
    int suma=0;
    int i=0;
    while(i<4){
        suma=suma+arr[i];
        i++;
    }
    cout<<suma<<endl;
    return 0;
}

int main(){

    int arr[4]={1,2,3,4};
    int suma=0;
    for(int i=0; i<4; i++){
        suma=suma+arr[i];
    }"-"
    cout<<suma<<endl;
    return 0;
}


//1

int arr[]={1,5,4,8};
void imprimir(int arr[], int tam){

    for(int i=0; i<tam; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int x[5];
    for(int i=0; i<5; i++)
        cin>>x[i];
    imprimir(x,5);

}



//2

int suma(int arr[], int tam){
    int a=0;
    for(int i=0; i<tam; i++)
        a+=arr[i];
    return a;
}



int suma(int arr[], int tam){
    if(tam==1)
        return arr[0];
    return arr[tam-1]+suma(arr,tam-1);

}

int main(){
    int x[5];
    for(int i=0; i<5; i++)
        cin>>x[i];
    cout<<suma(x,5);

}


int inversa(int arr[], int tam){
    int a=tam/2;
    tam=tam-1;
    for(int i=0; i<a; i++)
        int b=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=b;

    return arr[];

}


int x[5];
    for(int i=0; i<5; i++)
        cin>>x[i];

int main(){
    int x[5];
    for(int i=0; i<5; i++)
        cin>>x[i];
    cout<<inversa(x,5);

}








