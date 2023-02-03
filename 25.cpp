#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1,num2,num3,num4;

    cout<<"Escribe 4 numeros: ";
    cin>>num1>>num2>>num3>>num4;

    if(num4==num1){
        cout<<"El numero "<<num1<<" son iguales";
    }
    else if(num4==num2){
        cout<<"El numero "<<num2<<" son iguales";
    }
    else if(num4==num3){
        cout<<"El numero "<<num3<<" son iguales";
    }
    else {
        cout<<"Ninugn numero es igual"<<endl;
    }



    return 0;
}
