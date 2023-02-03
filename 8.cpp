#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c,d, total = 0;

    cout<<"Dame el valor de a: "; cin>>a;
    cout<<"Dame el valor de b: "; cin>>b;
    cout<<"Dame el valor de c: "; cin>>c;
    cout<<"Dame el valor de d: "; cin>>d;

    total = (a+b)/(c+d);

    cout.precision(2);
    cout<<"\nEl total del resultado es: "<<total<<endl;
    return 0;
}
