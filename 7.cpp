#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b, total = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;

    total = (a/b)+1;


    cout.precision(2);
    cout<<"\nEl valor de la expresion es: "<<total<<endl;
    return 0;
}
