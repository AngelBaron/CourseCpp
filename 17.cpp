#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, dato = 5;
    cout<<"Digite un numero"; cin>>numero;

    if(numero > dato){
        cout<<"El numero es mayor a 5";
    }
    else{
        cout<<"El numero es menor de 5";
    }
    return 0;
}
