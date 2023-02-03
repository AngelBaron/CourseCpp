#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, suma=0, cont=0;
    cout<<"Cuantos numeros quieres ";
    cin>>n;
    //entrada de datos y suma
    int num[n];
    for(int i=0; i<n; i++){
        cout<<"Dame el numero "<<i+1<<endl;
        cin>>num[i];
        suma += num[i];

    }

    for(int i=0; i<n; i++){
        if(num[i]==suma-num[i]){
            cont += 1;
            cout<<"Numero igual "<<num[i]<<"Numero a comparar "<<suma-num[i]<<endl;
        }
    }

    if(cont>0){
        cout<<"El numero se encuentra "<<cont<<" veces";
    }
    else{
        cout<<"El numero no se encuentra";
    }





    getch();
    return 0;
}
