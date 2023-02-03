#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float precio, total=0;
    char producto;

    cout<<"Dame el nombre del producto"; cin>>producto;

    cout<<"\nCual es el precio del producto"; cin>>precio;


    total = precio + (precio*.16);

    cout<<"\nEl producto: "<<producto<<"Tiene un valor de: "<<total;
    return 0;
}

