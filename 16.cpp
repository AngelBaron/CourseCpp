#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c, x1 = 0, x2 = 0;

    cout<<"Dame el valor de a: "; cin>>a;
    cout<<"Dame el valor de b: "; cin>>b;
    cout<<"Dame el valor de c: "; cin>>c;

    x1 = ((-b)+sqrt(pow(b,2)-(4*a*c)))/(a*2);
    x2 = ((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout<<"El valor de x1: "<<x1<<endl;
    cout<<"El valor de x2: "<<x2<<endl;
    
    return 0;
}
