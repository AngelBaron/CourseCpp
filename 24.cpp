#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int edad;

    cout<<"Dame tu edad: "; cin>>edad;

    if(edad>=18 && edad<=25){
        cout<<"La edad esta en el rango 18-25";
    }
    else{
        cout<<"La edad no esta en el rango";
    }

    return 0;
}