#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c,d,e,f, total = 0;

    cout<<"Dame el valor de a: "; cin>>a;
    cout<<"Dame el valor de b: "; cin>>b;
    cout<<"Dame el valor de c: "; cin>>c;
    cout<<"Dame el valor de d: "; cin>>d;
    cout<<"Dame el valor de e: "; cin>>e;
    cout<<"Dame el valor de f: "; cin>>f;

    total = (a+(b/c))/(d+(e/f));
    cout<<"\nEl total de la expresion es: "<<total<<endl;
    return 0;
}
