#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma=0,n;

    cout<<"Dame el valor de n";
    cin>>n;

    for(int i=0; i<=n; i++){
        suma+=i;
    }
    cout<<"El resultado es: "<<suma<<endl;

    getch();
    return 0;
}
