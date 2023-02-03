#include <conio.h>
#include <iostream>

using namespace std;

void pedirdatos();
void potencia(int num, int elev);


int numero, pot;



int main(int argc, char const *argv[])
{
    pedirdatos();
    potencia(numero,pot);



    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Dame un numero: ";
    cin>>numero;
    do{
    cout<<"Dame el numero en potencia ";
    cin>>pot;
    if(pot<0){
        cout<<"ERROR, LA POTENCIA DEBE SER POSITIVA";
    }
    }while(pot<0);
}

void potencia(int num, int elev){
    int aux=num;
    
    for(int i=2; i<=elev; i++){
        num=num*aux;
    }
    cout<<"El resultado es: "<<num<<endl;
}
