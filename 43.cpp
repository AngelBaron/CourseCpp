#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma=0, elev=2, n;

    cout<<"Dame el valor de n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        elev=2;
        for(int j=2; j<=i; j++){
            elev*=2;
        }
       
        suma+=elev;
    }
    cout<<"El resultado es: "<<suma<<endl;
    getch();
    return 0;
}
