#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra1[30];
    char palabra2[30];

    cout<<"Digite la primera cadena ";
    cin.getline(palabra1,20,'\n');

    cout<<"Digite la segunda cadena ";
    cin.getline(palabra2,20,'\n');

    if(strcmp(palabra1,palabra2)==0){
        cout<<"La cadenas son iguales";
    }
    else if(strcmp(palabra1,palabra2)>0){
        cout<<palabra1<<" es mayor alfabeticamente "<<endl;
    }
    else{
        cout<<palabra2<<" es mayor alfabeticamente "<<endl;
    }

    
    getch();
    return 0;
}
