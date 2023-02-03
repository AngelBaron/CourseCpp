#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, j;
    double fact=1, suma=0;

    cout<<"Dame el valor de n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"Valor de i: "<<i<<endl;
        fact=1;
        for(j=1;j<=i;j++){
            
            fact *=j;
            cout<<"Valor de j: "<<j<<endl;
            cout<<"Valor de fact: "<<fact<<endl;
        }
    cout<<"Valor de fact a suma: "<<fact<<endl;
    suma += fact;
    cout<<"Valor de suma: "<<suma<<endl;

    }

    cout<<"El resultado es: "<<suma;

    return 0;
}
