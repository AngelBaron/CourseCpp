#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[]={1,7,6,9,3};
    int i,j,aux,min=999;

    for(i=0;i<5;i++){
        min=999;
        for(j=i;j<5;j++){
            if(min>numeros[j]){
                min=numeros[j];
            }
        }
        cout<<i<<"    "<<min<<"   ";
        for(j=i;j<5;j++){
            if(min==numeros[j]){
                aux=numeros[j];
                numeros[j]=numeros[i];
                numeros[i]=aux;
            }
        }
    }

    cout<<"ORDENAMIENTO ASCENDENTE ";

    for(i=0;i<5;i++){
        cout<<numeros[i];
    }

    getch();
    return 0;
}
