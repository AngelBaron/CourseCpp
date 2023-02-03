#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, num, cont=0;
    srand(time(NULL));
    do{
        cout<<"Dame el valor de n: ";
        cin>>n;
    }while(n<1 && n>100);

    num=1 + rand()%(101-1);
    cout<<"Numero aleatorio: "<<num<<endl;

    do{
        if(n!=num){
            cout<<"No es el numero, otro intento"<<endl;
            if(n>num){
                cout<<"El numero que escribiste es mayor"<<endl;
            }
            if(n<num){
                cout<<"El numero que escribiste es menor"<<endl;
            }
        }
        cout<<"Dame el numero que es ";
        cin>>n;
        
        cont += 1;
        
        
    }while(n!=num);

    cout<<"Encontraste el numero "<<num<<endl;
    cout<<"CANTIDAD DE VECES NECESARIAS "<<cont<<endl;




    return 0;
}
