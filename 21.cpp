#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero;

    cout<<"Escriba un numero"; cin>>numero;

    if(numero%2==0){
        cout<<"El numero "<<numero<<" es par.";
    }
    else{
        cout<<"El numero "<<numero<<" es impar.";
    }
    return 0;
}
