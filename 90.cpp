#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void cuadrado(float x);

int main(int argc, char const *argv[])
{

    pedirdatos();



    getch();
    return 0;
}



void pedirdatos(){
    float num1;
    cout<<"Dame un numero";
    cin>>num1;
    cuadrado(num1);
}

void cuadrado(float x){
    float res=0;
    res=x*x;

    cout<<"El resultado es: "<<res<<endl;
}