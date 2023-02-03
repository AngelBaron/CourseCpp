#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int opc, num, resultado;

    cout<<"\tHola, ¿que quieres hacer?"; 
    cout<<"\n1. CUbo de un numero";
    cout<<"\n2. Numero par o impar";
    cout<<"\n3.Salir"<<endl;
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"OPCION ELEGIDA. CUBO DE UN NUMERO";
            cout<<"\nDame un numero"<<endl;
            cin>>num;
            resultado= pow(num,3);
            cout<<"El resultado es: "<<resultado<<endl;
            break;
        
        case 2:
            cout<<"OPCION ELEGIDA. NUMERO PAR O IMPAR";
            cout<<"\nDigite un numero"<<endl;
            cin>>num;

            if(num%2==0){
                cout<<"El numero elegido es par."<<endl;
            }
            else{
                cout<<"El numero elegido es impar"<<endl;
            }
            break;
        
        case 3:
            cout<<"OPCION ELEGIDA. SALIR";
            break;
        
        default:
            cout<<"Opcion invalida";
            break;

    }



    return 0;
}
