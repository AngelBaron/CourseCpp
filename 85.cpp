#include<iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[]={4,2,3,1,5};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i;
        aux= numeros[i];

        while((pos>0)&&(numeros[pos-1]>aux)){
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }

    cout<<"ORDEN ASCENDENTE: ";
    for(i=0;i<5;i++){
        cout<<numeros[i];
    }

    cout<<"\nORDEN DESCENDENTE: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i];
    }


    getch();    
    return 0;
}

