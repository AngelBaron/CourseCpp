#include <iostream>
#include <conio.h>

using namespace std;

void multiplicacion(float x, float y, float res);

int main(int argc, char const *argv[])
{
    float num1, num2, resul=0, maiss;
    cout<<"Digite los dos numeros ";
    cin>>num1>>num2;

    multiplicacion(num1,num2,resul);

    getch();
    return 0;
}

void multiplicacion(float x, float y, float res){
    res=x*y;
    cout<<"El resulado es: "<<res<<endl;
}
