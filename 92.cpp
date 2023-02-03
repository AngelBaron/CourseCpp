#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();

void unidades(double num);


double numero;
int main(int argc, char const *argv[])
{
    pedirdatos();
    unidades(numero);


    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Dame un numero: ";
    cin>>numero;
}

void unidades(double num){
    while(num>1000){
        num -=1000;
    }
    while(num>100){
        num -=100;
    }
    while(num>10){
        num -=10;
    }
    while(num>1){
        num -=1;
    }
    cout<<"Los numeros decimales son: "<<num;
}