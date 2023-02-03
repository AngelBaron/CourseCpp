#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2;

    cout<<"Digite un numero"; cin>>n1;
    cout<<"Digite un numero"; cin>>n2;

    if(n1==n2){
        cout<<"Ambos numeros son iguales";
    
    }

    else if(n1>n2){
        cout<<"El mayor es: "<<n1;
    }
    else{
        cout<<"El mayor es "<<n2;

    }
    

    return 0;
}
