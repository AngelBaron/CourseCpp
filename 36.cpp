#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int temp,max=0,min=999;
    float media,suma;
    
    for(int i=0;i<24;i+=4){
        cout<<"Digite la temperatura de la hora: "<<i<<" : ";
        cin>>temp;

        suma+=temp;

        if(temp>max){
            max=temp;
        }
        if(temp<min){
            min=temp;
        }


    }
    media = suma/6;

    cout<<"El promedio de las temperaturas es de: "<<media<<endl;
    cout<<"El minimo es: "<<min<<endl;
    cout<<"El maximo es: "<<max<<endl;

    getch();

    return 0;
}




