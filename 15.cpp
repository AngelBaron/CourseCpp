#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float x,y, resultado=0;

    cout<<"Dame el valor de x: "; cin>>x;
    cout<<"Dame el valor de y: "; cin>>y;

    resultado=(sqrt(x))/((pow(y,2)-1));

    cout<<"El resultado de la expresion es: "<<resultado<<endl;
    

    return 0;
}