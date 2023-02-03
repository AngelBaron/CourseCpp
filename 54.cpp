#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, max=0;

    cout<<"¿Cuantos elementos quieres?";
    cin>>n;

    int num[n];

    for(int i=0; i<n; i++){
        cout<<"Dame el valor del vector "<<i;
        cin>>num[i];
    }

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max=num[i];
        }    
    }
    cout<<"El numero mayor es: "<<max<<endl;


    getch();    
    return 0;
}
