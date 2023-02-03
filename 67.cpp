#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra[]="hola que taaalll";

    int lon=0;

    lon= strlen(palabra);

    cout<<"Numero de elementos es: "<<lon<<endl;

    getch();
    return 0;
}
