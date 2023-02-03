#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double n;
    double suma=1;

    cout<<"Dame el valor de n "<<endl;cin>>n;

    for(int i=1; i<=n; i++){
        suma = suma*i;
    }

    cout<<"El resultado es: "<<suma<<endl;

    getch();

    return 0;
}
