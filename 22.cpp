#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float numero;

    cout<<"Digite un numero ";
    cin>>numero;

    if(numero>0){
        cout<<"El numero "<<numero<<" es positivo";
    }
    else{
        cout<<"El numero "<<numero<<" es negativo.";
    }
    return 0;
}
