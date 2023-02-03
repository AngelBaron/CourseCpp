#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int edad;
    char sexo [10];
    double altura;

    cout<<"Dame tu edad "; cin>>edad;

    cout<<"\neres hombre o mujer? "; cin>>sexo;

    cout<<"\n¿Que altura tienes? "; cin>>altura;

    cout<<"Tu edad es: "<<edad<<" años"<<endl;
    cout<<"Tu sexo es: "<<sexo<<endl;
    cout<<"Tu altura es: "<<altura<<" metros"<<endl;

    return 0;
}
