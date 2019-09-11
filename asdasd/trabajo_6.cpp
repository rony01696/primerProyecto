#include <iostream>
using namespace std;

void imprimirdigito(int num){
    int a = (num/10000);
    int b = ((num/1000) - (a*10));
    int c = ((num/100)-((a*100)+(b*10)));
    int d = ((num/10)- ((a*1000)+(b*100)+(c*10)));
    int e = ((num/1)-((a*10000)+(b*1000)+(c*100)+(d*10)));
    cout << a << '\t'<< b << '\t' << c << '\t' << d << '\t' << e <<  endl;
}

int main(){


    imprimirdigito(851);
    return 0;

}


int contardigitos(int num){

    int div = 1;
    int cont = 0;

    while (div < num ){
        div = div * 10;
        cont++;
    }
    return cont;
}
int main(){

    cout<<contardigitos(1951)<<endl;
    return 0;
}


bool espalindrome(int num){
    int a = (num/10000);
    int b = ((num/1000) - (a*10));
    int c = ((num/100)-((a*100)+(b*10)));
    int d = ((num/10)- ((a*1000)+(b*100)+(c*10)));
    int e = ((num/1)-((a*10000)+(b*1000)+(c*100)+(d*10)));
    if ((a ==  e)&&(b == d))
        return true;
    else
        return false;

}

int main(){int main(){

    cout << sinumero(45) << endl;
    return 0;
}

    cout<<espalindrome(15241)<<endl;
    return 0;
}int main(){

    cout << sinumero(45) << endl;
    return 0;
}


int fibonacci(int num ){
    int cont = 2;
    int a=1;
    int b=1;
    while (cont <= num){
        cont++;
        int res = a + b;
        a = b;
        b = res ;
    }
    return b;
}int main(){

    cout << sinumero(45) << endl;
    return 0;
}

int main(){
    cout<<fibonacci(5)<<endl;

    return 0;
}


bool sinumero(char num){
    int trad = static_cast<int>(num);
    if ((trad>47)&&(trad < 58))
        return true;
    else
        return false;
}

int main(){

    cout << sinumero(45) << endl;
    return 0;
}



bool siesletra(char num){

    int letra= static_cast<int>(num);

    return ((letra>=65&&letra<=90)||(letra>=97&&letra<=122));


}


int main(){

    cout << siesletra('5') << endl;

    return 0;
}





