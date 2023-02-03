#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int saldo=1000,datos, respuesta;
    cout<<"Bienvenido al cajero automatico BBVA, tu saldo a favor es de: "<<saldo<<"$";
    cout<<"\n¿Que deseas hacer? ";
    cout<<"\n1.Retirar";
    cout<<"\n2.Depositar";
    cout<<"\n3.Salir"<<endl;
    cin>>respuesta;

    switch (respuesta){
        case 1 :
            cout<<"¿Cuanto deseas retirar?";
            cin>>datos;
            if(datos>saldo){
                cout<<"Saldo insuficiente";
            }       
            else{
                saldo-=datos;
                cout<<"Tu nuevo saldo es "<<saldo<<"$"<<endl;
            }
        case 2 :
            cout<<"¿Cuanto deseas depostar?";
            cin>>datos;
            saldo += datos;
            cout<<"Tu nuevo saldo es "<<saldo<<"$"<<endl;
            break;
        case 3:
            cout<<"Gracias por su preferencia, vuleva pronto."<<endl;
             
        
    }

    


    return 0;
}
