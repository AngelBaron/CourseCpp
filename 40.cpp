#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, suma=0;

    cout<<"Dame el valor de n";
    cin>>n;

    for(int i=1; i<=n; i++){
        suma=suma+((2*i)-1);
    }
    cout<<"El resultado es: "<<suma<<endl;
    return 0;
}
