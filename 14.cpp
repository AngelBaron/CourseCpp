#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b, c=0;

    cout<<"Dame el cateto a: "; cin>>a;
    cout<<"Dame el cateto b: "; cin>>b;

    c= sqrt(pow(a,2)+pow(b,2));

    cout<<"\nLa hipotebusa del triangulo es: "<<c<<endl;
    return 0;
}
