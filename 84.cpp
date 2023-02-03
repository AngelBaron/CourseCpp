#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[]={4,1,2,3,5};
    int i,j,aux;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }

    cout<<"ORDEN ASCENDENTE: "<<endl;
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
